#include<stdio.h>

long long int A, B, t_n, C, D;

int main(void) {
    scanf("%lld %lld", &A, &B);
    C = A;
    D = B;
    if (B>A) {
        t_n = A;
        A = B;
        B = t_n;
    }
    t_n = 1;
    while (t_n) {
        t_n = A % B;
        A = B;
        B = t_n;
    }
    printf("%lld", C*D/A);
}