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
        timer_period = 0.00005 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.time = 0.0

    def timer_callback(self):
        laser = LaserScan()
        laser.header.frame_id='base_link'
        laser.header.stamp = Clock().now().to_msg()
        laser.angle_min = -2/3*math.pi
        laser.angle_max = 2/3*math.pi
        laser.angle_increment = 1/300*math.pi
        #laser.time_increment = 
        laser.scan_time = float(laser.header.stamp.sec - self.time)
        laser.range_min = 1.0
        laser.range_max = 10.0
        laser.ranges = [0.0]*int(((laser.angle_max - laser.angle_min)/laser.angle_increment)+1)
        for i in range(len(laser.ranges)):
            laser.ranges[i] = 9*random.random() + 1
        #laser.intensities = 
        
        self.time = laser.header.stamp.sec
        self.publisher_.publish(laser)
        self.get_logger().info('Publish: "%s"' % laser)
        self.i += 1 

def main(args=None):
    rclpy.init(args=args)
    fake_scan_publisher=FakeScanPublisher()
    rclpy.spin(fake_scan_publisher)
    fake_scan_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
