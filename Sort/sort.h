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
    for (i = 1; i < length; i++) {
        temp = array[i];
        low = 0;
        high = i - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (temp > array[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        for (j = i - 1; j >= low; j--) {
            array[j + 1] = array[j];
        }
        array[low] = temp;
    }
}

void shellSort(int *array, int length) {
    int i, j, k, step, temp;
    for (step = length / 2; step > 0; step /= 2) {
        for (i = 0; i < step; i++) {
            for (j = i + step; j < length; j += step) {
                if (array[j] < array[j - step]) {
                    temp = array[j];
                    k = j - step;
                    while (k >= 0 && temp < array[k]) {
                        array[k + step] = array[k];
                        k = k - step;
                    }
                    array[k + step] = temp;
                }
            }
        }
    }
}

void bubbleSort(int *array, int length) {
    int temp;
    int sorted = 0;
    for (int i = length - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (array[j - 1] > array[j]) {
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
                sorted = 1;
            }
            if (sorted == 0) {
                return;
            }
        }
    }
}

void quickSort(int *array, int low, int high) {
    int temp, i, j;
    i = low;
    j = high;
    if (low < high) {
        temp = array[low];
        while (i < j) {
            while (i < j && array[j] >= temp) {
                --j;
            }
            if (i < j) {
                array[i] = array[j];
                ++i;
            }
            while (i < j && array[i] < temp) {
                ++i;
            }
            if (i < j) {
                array[j] = array[i];
                --j;
            }
        }
        array[i] = temp;
        quickSort(array, low, i - 1);
        quickSort(array, i + 1, high);
    }
}

void selectSort(int *array, int length) {
    int min, temp;
    for (int i = 0; i < length; ++i) {
        min = i;
        for (int j = i + 1; j < length; ++j) {
            if (array[min] > array[j]) {
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

void reverse(int *array, int length) {
    int reverseArray[length];
    for (int j = 0; j < length; ++j) {
        reverseArray[j] = array[j];
    }
    for (int i = 0; i < length; ++i) {
        array[i] = reverseArray[length - i - 1];
    }
}

void Merge(int *array, int low, int m, int high) {
    int i = low, j = m + 1, p = 0;
    int *array2;
    array2 = (int *) malloc((high - low + 1) * sizeof(int));
    if (!array2) {
        return;
    }
    while (i <= m && j <= high) {
        array2[p++] = (array[i] <= array[j]) ? array[i++] : array[j++];
    }
    while (i <= m) {
        array2[p++] = array[i++];
    }
    while (j <= high) {
        array2[p++] = array[j++];
    }
    for (p = 0, i = low; i <= high; p++, i++) {
        array[i] = array2[p];
    }
}

void mergeSort(int *array, int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        Merge(array, low, mid, high);
    }
}

#endif //DATA_STRUCTURE_SORT_H
