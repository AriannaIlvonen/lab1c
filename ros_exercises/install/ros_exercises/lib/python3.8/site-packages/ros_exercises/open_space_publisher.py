import rclpy
from rclpy.node import Node
import math
from std_msgs.msg import Float32
from sensor_msgs.msg import LaserScan
from open_space_msg.msg import OpenSpace


class openSpacePublisher(Node):

    def __init__(self):
        super().__init__('simple_subscriber')
        self.distance = 1.0
        self.angle = 1.0
        self.subscription = self.create_subscription(
            LaserScan,
            'fake_scan',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning


        #self.publisher1 = self.create_publisher(Float32, 'open_space/distance',10)
        #self.publisher2 = self.create_publisher(Float32, 'open_space/angle',10)
        self.publisher = self.create_publisher(OpenSpace, 'open_space_publisher',10)
        timer_period = 0.00005 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def listener_callback(self, msg):
        #self.get_logger().info('I heard: "%s"' % msg.data)

        self.distance= max(msg.ranges)
        length_ind = msg.ranges.index(max(msg.ranges))
        self.angle = ((msg.angle_increment)*length_ind)+msg.angle_min


    def timer_callback(self):
        #msg_dist = Float32()
        #msg_angle = Float32()
        msg_out = OpenSpace()
        msg_out.angle = self.angle
        msg_out.distance = self.distance

        #msg_dist.data = self.distance
        #msg_angle.data = self.angle

        #self.publisher1.publish(msg_dist)
        #self.publisher2.publish(msg_angle)
        self.publisher.publish(msg_out)

        self.get_logger().info('Distance: "%s"' % self.distance)
        self.get_logger().info('Angle: "%s"' % self.angle)
        self.i+=1

def main(args=None):
    rclpy.init(args=args)
    open_space_publisher = openSpacePublisher()
    rclpy.spin(open_space_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    open_space_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
