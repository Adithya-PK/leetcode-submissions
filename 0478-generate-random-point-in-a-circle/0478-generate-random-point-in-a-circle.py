import random
import math

class Solution(object):
    def __init__(self, radius, x_center, y_center):
        self.radius = radius
        self.x_center = x_center
        self.y_center = y_center

    def randPoint(self):
        while True:
            x = random.uniform(-self.radius, self.radius)
            y = random.uniform(-self.radius, self.radius)
            if x**2 + y**2 <= self.radius**2:
                return [self.x_center + x, self.y_center + y]