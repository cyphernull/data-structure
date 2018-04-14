//
// Created by Eric Choo on 2018/4/14.
//

#ifndef DATA_STRUCTURE_SORT_H
#define DATA_STRUCTURE_SORT_H

void insertSort(int *array, int n) {
    int j, temp;
    for (int i = 0; i < n; ++i) {
        temp = array[i];
        j = i;
        while (j >= 0 && temp < array[j - 1]) {
            array[j] = array[j - 1];
            --j;
        }
        array[j] = temp;
    }
}

void binaryInsertSort(int *array, int n) {
    int i, j, mid, low, high, tmp;
    for (i=1; i < n; i++) {
        tmp = array[i];
        low = 0;
        high = i-1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (tmp > array[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        for (j = i-1; j >= low; j--) {
            array[j + 1] = array[j];
        }
        array[low] = tmp;
    }
}

#endif //DATA_STRUCTURE_SORT_H
