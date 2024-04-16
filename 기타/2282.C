#include <stdio.h>

int N;
int stop = 1;

int main(void) {
    scanf("%d", &N);
    int i = 1;

    while (N > stop) {
        stop += 6*i;
        i++;
    }
    printf("%d", i);
}