import rclpy
from rclpy.node import Node
import math
from std_msgs.msg import Float32


class SimpleSubscriber(Node):

    def __init__(self):
        super().__init__('simple_subscriber')
        self.number = 1.0
        self.subscription = self.create_subscription(
            Float32,
            'my_random_float',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

        self.publisher_ = self.create_publisher(Float32, 'random_float_log',10)
        timer_period = 0.00005 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        self.number = msg.data

    def timer_callback(self):
        msg = Float32()
        msg.data = math.log(self.number)
        self.publisher_.publish(msg)
        self.get_logger().info('Publish: "%s"' % msg.data)
        self.i+=1

def main(args=None):
    rclpy.init(args=args)
    simple_subscriber = SimpleSubscriber()
    rclpy.spin(simple_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    simple_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
