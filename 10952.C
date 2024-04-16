#include <stdio.h>
int A, B;

int main(void){
    scanf("%d %d", &A, &B);
    while (A+B != 0) {
        printf("%d\n", A+B);
        scanf("%d %d", &A, &B);
    }
}