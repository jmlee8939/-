#include<stdio.h>

int A, B, C, D;
int a, b, c;

int main(void) {
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);
    
    a = A*D + C*B;
    b = B*D;

    if (a >= b) {
        c = a;
        a = b;
        b = c;
    } 
    c = 1;
    while (c) {
        c = b % a;
        b = a;
        a = c;
    }
    printf("%d %d", (A*D + C*B)/b, B*D/b);
}