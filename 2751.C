#include <stdio.h>

int N;
int arr[1000001];
int sorted[1000001];

void merge(int list[], int left, int mid, int right) {
    int i, j, k;

    i = left;
    j = mid+1;
    k = left;

    while (i<=mid && j<=right) {
        if (list[i] >= list[j]) {
            sorted[k++] = list[j++];
        } else {
            sorted[k++] = list[i++];
        }
    }

    while (i <= mid) {
        sorted[k++] = list[i++];
    }
    while (j <= right) {
        sorted[k++] = list[j++];
    }
    
    for (int l = left; l<=right; l++) {
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int left, int right)  {
    int mid;

    if (left<right) {
        mid = (left + right)/2;
        merge_sort(list, left, mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right);
    }
}

int main(void) {
    scanf("%d", &N);
    for (int m = 0; m<N;m++) {
        scanf("%d", &arr[m]);
    }
    merge_sort(arr, 0, N-1);

    for (int i = 0; i<N;i++) {
        printf("%d\n", arr[i]);
    }
}

