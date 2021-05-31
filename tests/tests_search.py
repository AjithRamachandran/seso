import unittest
import numpy as np

import seso

class TestSearchAlgorithms(unittest.TestCase):

    def setUp(self):
        self.arr = np.array([1, 4, 5, 8, 6, 2, 9, 7, 0, 3])
        self.val = 5
        self.true = 2

    def test_linear_search(self):
        self.assertEqual(seso.search(self.arr, self.val, 'linearsearch'), self.true)

    def test_binary_search(self):
        self.assertEqual(seso.search(self.arr, self.val, 'binarysearch'), self.true)

    def test_jump_search(self):
        self.assertEqual(seso.search(self.arr, self.val, 'jumpsearch'), self.true)

    def test_interpolation_search(self):
        arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9]) # interpolation search works only on sorted array
        true = 5
        self.assertEqual(seso.search(arr, self.val, 'interpolationsearch'), true)

    def test_exponential_search(self):
        self.assertEqual(seso.search(self.arr, self.val, 'exponentialsearch'), self.true)

    def test_fibonacci_search(self):
        self.assertEqual(seso.search(self.arr, self.val, 'fibonaccisearch'), self.true)

    def test_ternary_search(self):
        self.assertEqual(seso.search(self.arr, self.val, 'ternarysearch'), self.true)

if __name__ == '__main__':
    unittest.main()
