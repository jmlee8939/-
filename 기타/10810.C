#include <stdio.h>

int M;
int N;
int from;
int to;
int num;

int main(void) {
    scanf("%d %d", &N, &M);

    int basket[101] = {0};

    for (int i = 0 ; i < M ; i++) {
        scanf("%d %d %d", &from, &to, &num);
        for (int j = (from - 1); j <= (to - 1); j++) {
            basket[j] = num;
        }
    }

    for (int i = 0 ; i < N ; i++) {
        printf("%d ", basket[i]);
    }
}