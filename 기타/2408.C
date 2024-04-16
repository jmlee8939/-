#include <stdio.h>

int A, B, C;
int s;
int n3; 

int main(void){
    s = 0;

    scanf("%d %d %d", &A, &B, &C);
    if (A==B) {
        s += 1;
        n3 = A;
    }
    if (B==C) {
        s += 1;
        n3 = B;
    }
    if (A==C) {
        s += 1;
        n3 = C;
    }
    if (s == 3) {
        printf("%d", 10000 + 1000 * n3);
    }
    if (s == 1) {
        printf("%d", 1000 + 100 * n3);
    } 
    if (s == 0) {
        if (A > B) {
            n3 = A;
        } else {
            n3 = B;
        }
        if (C > n3) {
            n3 = C;
        }
        printf("%d", 100*n3);
    }
}
