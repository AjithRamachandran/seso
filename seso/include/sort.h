#ifndef SORT_H
#define SORT_H

#include "bubblesort.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "quicksort.h"

int sort(double *arr, int len, char *algorithm) {
    if (strcmp(algorithm, "bubblesort") == 0) {
        bubbleSort(arr, len);
    } else if (strcmp(algorithm, "selectionsort") == 0) {
        selectionSort(arr, len);
    } else if (strcmp(algorithm, "insertionsort") == 0) {
        insertionSort(arr, len); 
    } else if (strcmp(algorithm, "quicksort") == 0) {
        quickSort(arr, 0, len-1); 
    } else {
        return 1;
    }
    return 0;
}

#endif //SORT_H
