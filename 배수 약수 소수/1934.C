#include <stdio.h>

int N;
int A, B;

int main(void) {
    scanf("%d", &N);
    int gcf = 1;
    for (int i=0; i<N; i++) {
        scanf("%d %d", &A, &B);
        int t_n = 1;
        while (t_n <= A && t_n <= B) {
            if (A%t_n==0 && B%t_n==0) {
                gcf = t_n;
            }
            t_n++;
        }
        printf("%d\n", A*B/gcf);
    }
}