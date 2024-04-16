#include <stdio.h>

int N, M;
int arr[101];
int a, b;
int t_num;

int main(void) {
    scanf("%d %d", &N, &M);

    for (int i = 1 ; i <= N; i++) {
        arr[i] = i;
    }

    for (int i = 0 ; i < M ; i++) {
        scanf("%d %d", &a, &b);
        t_num = arr[a];
        arr[a] = arr[b];
        arr[b] = t_num;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", arr[i]);
    }
}