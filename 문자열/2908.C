#include <stdio.h>

int A, B, a, b;
int A1, A2, A3;
int B1, B2, B3;

int main(void) {
    scanf("%d %d", &A, &B);

    A1 = A / 100;
    A2 = (A % 100) / 10;
    A3 = A % 10;

    B1 = B / 100;
    B2 = (B % 100) / 10;
    B3 = B % 10;

    a = A3*100 + A2*10 + A1;
    b = B3*100 + B2*10 + B1;

    if (a > b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
    
}