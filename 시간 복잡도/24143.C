#include <stdio.h>

int a1, a0;
int c;
int n0;

int main(void) {
    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);

    if (a1*n0+a0 <= c*n0) {
        if (a1 <= c) {
            printf("%d", 1);
        } else {
            printf("%d", 0);
        }
    } else {
        printf("%d", 0);
    }
}