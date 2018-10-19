#include <stdio.h>

//first: values should be sorted
//Please use the sorting algorithms that provided

int binarySearch(int *, int, int, int);

int main() {

    int arr[] = {7, 8, 26, 44, 13, 23, 98, 57}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos;

    pos = binarySearch(arr, 0, size - 1, 13);

    return 0;
}

int binarySearch(int *arr, int first, int last, int sKey) {
    if (first <= last) {
        int middle = (first + last) / 2;
        if (arr[middle] == sKey)
            return middle;
        if (sKey < arr[middle])
            return binarySearch(arr, first, middle -1, sKey);
        return binarySearch(arr, middle + 1, last, sKey);
    }
    return -1;
}