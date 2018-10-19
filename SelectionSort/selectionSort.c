#include <stdio.h>

void selectionSort(int *, int);
void swap(int *, int *);

int main() {

    int arr[] = {7, 8, 26, 44, 13, 23, 98, 57}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
    return 0;
}

void selectionSort(int *arr, int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        int min = i, j, t;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(&arr[min], &arr[i]);
        
        printf("%d. Run\n", i + 1);
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