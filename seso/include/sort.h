#ifndef SORT_H
#define SORT_H

#include "bubblesort.h"

int sort(double *arr, int len, char *algorithm) {
    if (strcmp(algorithm, "bubblesort") == 0) {
        bubbleSort(arr, len);
    } else if (strcmp(algorithm, "selectionsort") == 0) {
        bubbleSort(arr, len);
    } else {
        return 1;
    }
    return 0;
}

#endif //SORT_H
