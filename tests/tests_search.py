import unittest
import numpy as np

import seso

class TestSearchAlgorithms(unittest.TestCase):

    def setUp(self):
        self.arr = np.array([1, 4, 5, 8, 6, 2, 9, 7, 0, 3])
        self.val = 5
        self.true = 2

if __name__ == '__main__':
    unittest.main()
