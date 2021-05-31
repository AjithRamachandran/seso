#ifndef RADIX_SORT_H
#define RADIX_SORT_H

#include <stdlib.h>

double getMax(double *arr, int n) {
    double max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countSort(double *arr, int n, int exp) {
    double *output;
    int i, temp, count[10] = {0};

    output = (double*)malloc(n * sizeof(double));

    for (i = 0; i < n; i++) {
        temp = arr[i];
        count[(temp / exp) % 10]++;
    }

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        temp = arr[i];
        output[count[(temp / exp) % 10] - 1] = arr[i];
        count[(temp / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(double *arr, int n) {
    double m = getMax(arr, n);
    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

#endif  // RADIX_SORT_H
