#include <stdio.h>

void mergeSort(int *, int, int);
void merge(int *, int, int, int);

int main() {

    int arr[] = {7, 8, 26, 44, 13, 23, 98, 57}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr, 0, size - 1);
    return 0;
}

void mergeSort(int *arr, int first, int last) {
    int middle = (first + last) / 2;
    if(first < last) {
        mergeSort(arr, first, middle);
        mergeSort(arr, middle + 1, last);

        merge(arr, first, middle, last);
    }
}

void merge(int *arr, int first, int middle, int last) {
    int first1 = first;
    int last1 = middle;
    int first2 = middle + 1;
    int last2 = last;
    int index = first1;
    int tempArr[last + 1];
    
    for(; (first1 <= last1) && (first2 <= last2); ++index) {
        if (arr[first1] < arr[first2]) {
            tempArr[index] = arr[first1++];
        }
        else {
            tempArr[index] = arr[first2++];
        }
    }

    for(; first1 <= last1; ++first1, ++index) {
        tempArr[index] = arr[first1];
    }

    for(; first2 <= last2; ++first2, ++index) {
        tempArr[index] = arr[first2];
    }

    for(index = first; index <= last; ++index) {
        arr[index] = tempArr[index];
    }
}
