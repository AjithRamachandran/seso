import unittest
import numpy as np

import seso

class TestSortAlgorithms(unittest.TestCase):

    def setUp(self):
        self.arr = np.array([1, 4, 5, 8, 6, 2, 9, 7, 0, 3])
        self.true = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

    def test_bubble_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'bubblesort'), self.true)

    def test_selection_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'selectionsort'), self.true)

    def test_insertion_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'insertionsort'), self.true)

    def test_quick_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'quicksort'), self.true)

    def test_merge_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'mergesort'), self.true)
    
    def test_heap_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'heapsort'), self.true)

    def test_bucket_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'bucketsort'), self.true)

    def test_radix_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'radixsort'), self.true)

    def test_shell_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'shellsort'), self.true)

    def test_tim_sort(self):
        np.testing.assert_array_equal(seso.sort(self.arr, 'timsort'), self.true)


if __name__ == '__main__':
    unittest.main()
