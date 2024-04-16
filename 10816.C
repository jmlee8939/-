#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N;
int M;
int t_n;
int arr[20000001] = {0};

int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &t_n);
        t_n += 10000000;
        arr[t_n]+=1;
    }
    scanf("%d", &M);
    for (int i=0; i<M; i++) {
        scanf("%d", &t_n);
        t_n += 10000000;
        printf("%d ", arr[t_n]);
    }
}

