#publish random number between 1 and 10

import rclpy
import random
import math
from rclpy.node import Node 
from rclpy.clock import Clock
from sensor_msgs.msg import LaserScan

class FakeScanPublisher(Node):
    
    def __init__(self):
        super().__init__('fake_scan_publisher')
        self.publisher_ = self.create_publisher(LaserScan, 'fake_scan', 10)
        #parameters
        self.declare_parameter('publish_topic', "fake_scan") 
        self.declare_parameter('publish_rate', 20) 
        self.declare_parameter('angle_min', -2/3*math.pi) 
        self.declare_parameter('angle_max', 2/3*math.pi) 
        self.declare_parameter('range_min', 1.0) 
        self.declare_parameter('range_max', 10.0) 
        self.declare_parameter('angle_increment', 1/300*math.pi) 

        timer_period = 1/self.get_parameter('publish_rate').value
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.time = 0.0

    def timer_callback(self):
        laser = LaserScan()
        laser.header.frame_id='base_link'
        laser.header.stamp = Clock().now().to_msg()
        laser.angle_min =self.get_parameter("angle_min").value
        laser.angle_max = self.get_parameter("angle_max").value
        laser.angle_increment = self.get_parameter("angle_increment").value
        #laser.time_increment = 
        laser.scan_time = float(laser.header.stamp.sec - self.time)
        laser.range_min = self.get_parameter("range_min").value
        laser.range_max = self.get_parameter("range_max").value
        laser.ranges = [0.0]*int(((laser.angle_max - laser.angle_min)/laser.angle_increment)+1)
        for i in range(len(laser.ranges)):
            laser.ranges[i] = (laser.range_max-laser.range_min)*random.random() + laser.range_min
        #laser.intensities = 
        
        self.time = laser.header.stamp.sec
        self.publisher_.publish(laser)
        self.get_logger().info('Publish: "%s"' % laser.ranges)
        self.i += 1 

def main(args=None):
    rclpy.init(args=args)
    fake_scan_publisher=FakeScanPublisher()
    rclpy.spin(fake_scan_publisher)
    fake_scan_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
