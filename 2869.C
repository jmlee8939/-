#include <stdio.h>

int A, B, V;

int main(void) {
    scanf("%d %d %d", &A, &B, &V);

    if (V <= A) {
        printf("%d", 1);
    }
    else {
        if ((V-A)%(A-B) == 0) {
            printf("%d", (V - A)/(A - B)+1);
        }
        else {
            printf("%d", (V - A)/(A - B)+2);
        }
        
    }
}