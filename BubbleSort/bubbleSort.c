#include <stdio.h>

void bubbleSort(int *, int);
void swap(int *, int *);

int main() {

    int arr[] = {7, 8, 26, 44, 13, 23, 98, 57}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos;
    bubbleSort(arr,size);

    pos = binarySearch(arr, 0, size - 1, 13);
    return 0;
}

void bubbleSort(int *arr, int n) {
    int sorted = 1;
    int last = n - 1;
    int i;
    for (i = 0; (i < last) && sorted; i++) {
        sorted = 0;
        int j;
        for (j = last; j > i; j--) {
            if (arr[j - 1] > arr[j]) {
                swap(&arr[j], &arr[j - 1]);
                sorted = 1;
            }
        }
        int t;
        printf("%d. Run\n", (i + 1));
        for (t = 0; t < n; t++) {
            printf("%d ",arr[t]);
        }
        printf("\n");
    }
}

void swap(int *f, int *l) {
    int temp;
    temp = *f;
    *f = *l;
    *l = temp;  
}