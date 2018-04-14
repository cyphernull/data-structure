//
// Created by Eric Choo on 2018/4/14.
//

#ifndef DATA_STRUCTURE_SORT_H
#define DATA_STRUCTURE_SORT_H

void insertSort(int *array, int length) {
    int j, temp;
    for (int i = 0; i < length; ++i) {
        temp = array[i];
        j = i;
        while (j >= 0 && temp < array[j - 1]) {
            array[j] = array[j - 1];
            --j;
        }
        array[j] = temp;
    }
}

void binaryInsertSort(int *array, int length) {
    int i, j, mid, low, high, temp;
    for (i=1; i < length; i++) {
        temp = array[i];
        low = 0;
        high = i-1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (temp > array[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        for (j = i-1; j >= low; j--) {
            array[j + 1] = array[j];
        }
        array[low] = temp;
    }
}

#endif //DATA_STRUCTURE_SORT_H
