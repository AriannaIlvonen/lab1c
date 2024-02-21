#publish random number between 1 and 10

import rclpy
import random
from rclpy.node import Node 
from std_msgs.msg import Float32
import numpy as np
import tf2_ros
import tf_transformations
from geometry_msgs.msg import TransformStamped

class BaseLinkPublisher(Node):
    
    def __init__(self):
        super().__init__('base_link_tf_pub')

        #create leftcam transforms
        self.robot_wrt_leftcam = np.eye(4)
        self.robot_wrt_leftcam[:3, -1] = np.array([0.05, 0, 0]).T

        self.tfBuffer = tf2_ros.Buffer()
        self.listener = tf2_ros.TransformListener(self.tfBuffer, self)
        self.br = tf2_ros.TransformBroadcaster(self)
        #self.publisher_ = self.create_publisher(Float32, 'my_random_float', 10)
        timer_period = 0.05 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        #Get the current transform of the robot w.r.t. world. Use the TF tree!
        #self.get_logger().info('hello?')
        try:
            leftcam_tf = self.tfBuffer.lookup_transform('base_link_gt', 'left_cam', self.get_clock().now())
        except tf2_ros.TransformException:
            self.get_logger().info('no transform from world to left_cam found')
            return
        self.get_logger().info(leftcam_tf)
       
        now = self.get_clock().now()

        leftcam_wrt_world = self.tf_to_se3(leftcam_tf.transform)
        robot_wrt_world = leftcam_wrt_world @ self.robot_wrt_leftcam
        base_link_gt_2 = self.se3_to_tf(robot_wrt_world, now, parent="world", child="base_link_gt_2")


        self.br.sendTransform([base_link_gt_2])
        self.i += 1

    def tf_to_se3(self, transform):
        #Convert the robot's transform to a 4x4 numpy array.
        q = transform.rotation
        q = [q.x, q.y, q.z, q.w]
        t = transform.translation
        mat = tf_transformations.quaternion_matrix(q)
        mat[0, 3] = t.x
        mat[1, 3] = t.y
        mat[2, 3] = t.z
        return mat
    
    def se3_to_tf(self, mat, time, parent, child):
        #convert tho 4x4 numpy array to ros robot transform
        obj = TransformStamped()
        obj.header.stamp = time.to_msg()
        obj.header.frame_id = parent
        obj.child_frame_id = child
        obj.transform.translation.x = mat[0, 3]
        obj.transform.translation.y = mat[1, 3]
        obj.transform.translation.z = mat[2, 3]
        q = tf_transformations.quaternion_from_matrix(mat)
        obj.transform.rotation.x = q[0]
        obj.transform.rotation.y = q[1]
        obj.transform.rotation.z = q[2]
        obj.transform.rotation.w = q[3]
        return obj

def main(args=None):
    rclpy.init(args=args)
    cam_publisher=BaseLinkPublisher()
    rclpy.spin(cam_publisher)
    cam_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
