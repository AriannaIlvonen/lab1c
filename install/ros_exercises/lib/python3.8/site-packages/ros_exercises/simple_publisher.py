#publish random number between 1 and 10

import rclpy
import random
from rclpy.node import Node 
from std_msgs.msg import Float32

class SimplePublisher(Node):
    
    def __init__(self):
        super().__init__('simple_publisher')
        self.publisher_ = self.create_publisher(Float32, 'my_random_float', 10)
        timer_period = 0.00005 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Float32()
        msg.data = random.random()*10
        self.publisher_.publish(msg)
        self.get_logger().info('Publish: "%s"' % msg.data)
        self.i += 1 

def main(args=None):
    rclpy.init(args=args)
    simple_publisher=SimplePublisher()
    rclpy.spin(simple_publisher)
    simple_publisher.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
