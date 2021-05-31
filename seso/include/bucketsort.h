#ifndef BUCKET_SORT_H
#define BUCKET_SORT_H

void bucketSort(double *arr, int n) {
    int i, j, temp;
    int *count;

    count = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        count[i] = 0;

    for (i = 0; i < n; i++) {
        temp = arr[i];
        (count[temp])++;
    }

    for (i = 0, j = 0; i < n; i++)
        for (; count[i] > 0; (count[i])--)
            arr[j++] = i;
    
    free(count);
}

#endif  // BUCKET_SORT_H
