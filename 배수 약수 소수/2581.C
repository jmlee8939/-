#include <stdio.h>

int M, N;
int min=0;
int sum=0;

int main(void) {
    scanf("%d %d", &N, &M); 
    for (int i=N; i<=M ; i++) {
        int k = 0;
        for (int j=1; j<=i; j++) {
            if (i%j==0) {
                k++;
            }
            if (k>2) {
                break;
            }
        }
        if (k == 2) {
            if (min == 0) {
                min = i;
            }
            sum += i;
        }
    }
    if (min == 0) {
        printf("%d", -1);
    }
    else {
        printf("%d\n", sum);
        printf("%d", min);
    }
}