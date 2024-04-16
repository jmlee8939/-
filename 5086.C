#include <stdio.h>

int A, B = 1;

int main(void) {
    scanf("%d %d", &A, &B);
    while (A!=0 || B!=0) {
        if (A>B) {
            if (A%B==0) {
                printf("%s", "multiple\n");
            }
            else {
                printf("%s", "neither\n");
            }
        }
        else {
            if (B%A==0) {
                printf("%s", "factor\n");
            }
            else {
                printf("%s", "neither\n");
            }
        }
        scanf("%d %d", &A, &B);
    }
}
