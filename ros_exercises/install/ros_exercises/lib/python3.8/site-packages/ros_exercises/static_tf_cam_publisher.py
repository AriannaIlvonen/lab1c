#publish random number between 1 and 10

import rclpy
import random
from rclpy.node import Node 
from std_msgs.msg import Float32
import numpy as np
import tf2_ros
import tf_transformations
from geometry_msgs.msg import TransformStamped

class StaticCamPublisher(Node):
    
    def __init__(self):
        super().__init__('static_tf_cam_publisher')
        #create buffer 
        self.tfBuffer = tf2_ros.Buffer()
        self.listener = tf2_ros.TransformListener(self.tfBuffer, self)
        self.br = tf2_ros.StaticTransformBroadcaster(self)
        timer_period = 0.05 #seconds

        #create leftcam transforms
        self.leftcam_wrt_robot = np.eye(4)
        self.leftcam_wrt_robot[:3, -1] = np.array([-0.05, 0, 0]).T
        self.rightcam_wrt_robot = np.eye(4)
        self.rightcam_wrt_robot[:3, -1] = np.array([0.05, 0, 0]).T

        now = rclpy.time.Time()
        leftcam_tf = self.se3_to_tf(self.leftcam_wrt_robot, now, parent='base_link_gt', child='left_cam')
        rightcam_tf = self.se3_to_tf(self.rightcam_wrt_robot, now, parent='base_link_gt', child='right_cam')

        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.br.sendTransform([leftcam_tf, rightcam_tf])

    def timer_callback(self):
        #Get the current transform of the robot w.r.t. world. Use the TF tree!
        # try:
        #     tf_world_to_robot = self.tfBuffer.lookup_transform('world', 'base_link_gt', rclpy.time.Time())
        # except tf2_ros.TransformException:
        #     self.get_logger().info('no transform from world to base_link_gt found')
        #     return
        
        #robot_to_world = self.tf_to_se3(tf_world_to_robot.transform)

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
    static_cam_publisher=StaticCamPublisher()
    rclpy.spin(static_cam_publisher)
    static_cam_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
