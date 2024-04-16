#include <stdio.h>

int A, B, C;

int main(void) {
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A + B + C != 180) {
        printf("Error");
        return 0;
    }
    else {
        if (A == B || B == C || A == C) {
            if (A == B && B == C) {
                printf("Equilateral");
                return 0;
            } else {
                printf("Isosceles");
                return 0;
            }
        } else {
            printf("Scalene");
            return 0;
        }
    }
}