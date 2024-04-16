#include <stdio.h>

int N;
int arr[1001];
int min;
int min_idx;
int temp;

int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<N; i++) {
        min = 1001;
        for (int j=i; j<N; j++) {
            if (min > arr[j]) {
            min = arr[j];
            min_idx = j;
            } 
        }
        //printf("%d--min\n", min);
        temp = arr[i];
        arr[i] = min;
        arr[min_idx] = temp;
    }
    for (int i=0; i<N; i++) {
        printf("%d\n", arr[i]);
    }
}