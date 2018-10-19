#include <stdio.h>

void insertionSort(int *, int);

int main() {

    int arr[] = {7, 8, 26, 44, 13, 23, 98, 57}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    return 0;
}

void insertionSort(int *arr, int n) {
    int i;
    for (i = 1; i < n; i++) {
        int temp = arr[i];
        int j, t;
        for (j = i; j > 0 && temp < arr[j - 1]; j--)
            arr[j] = arr[j - 1];
        arr[j] = temp;
        printf("%d. Run\n", i);
        for (t = 0; t < n; t++) {
            printf("%d ",arr[t]);
        }
        printf("\n");
    }
}