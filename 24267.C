#include <stdio.h>

long long n;

int main(void){
    scanf("%lld", &n);
    printf("%lld\n", (n*(n+1)*(2*n+1))/12 - (3*n*(n+1))/4 + n);
    printf("%d", 3);
}
