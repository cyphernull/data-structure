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
    int sorted, temp;
    for (int i = length - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (array[j - 1] > array[j]) {
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
                sorted = 1;
            }
            if (sorted ==0){
                return;
            }
        }
    }
}

void quickSort(int *array, int low, int high){
    int temp, i,j;
    i=low;
    j=high;
    if (low<high){
        temp = array[low];
        while(i<j){
            while(i<j && array[j]>=temp){
                --j;
            }
            if(i<j){
                array[i]=array[j];
                ++i;
            }
            while(i<j && array[i]<temp){
                ++i;
            }
            if (i<j){
                array[j]=array[i];
                --j;
            }
        }
        array[i]=temp;
        quickSort(array,low,i-1);
        quickSort(array,i+1,high);
    }
}

#endif //DATA_STRUCTURE_SORT_H
