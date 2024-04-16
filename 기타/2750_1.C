#include <stdio.h>

int N;
int arr[1000001];

void quick_sort(int array[], int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot;
    int i, j;
    int temp;
    
    i = start + 1;
    j = end;
    pivot = start;
    while (i<=j) {
        while (array[pivot]>=array[i] && i<=end) {
            i++;
        }
        while (array[pivot]<=array[j] && j>start) {
            j--;
        }
        if (j<i) {
            temp = array[j];
            array[j] = array[pivot];
            array[pivot] = temp;
        } else {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    quick_sort(array, j+1, end);
    quick_sort(array, start, j-1);    
}

int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, N-1);
    for (int i=0; i<N; i++) {
        printf("%d\n", arr[i]);
    }
}


