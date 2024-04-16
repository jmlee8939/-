#include <stdio.h>

char s[1001];
int n;

int main(void){
    scanf("%s", s);
    scanf("%d", &n);
    printf("%c", s[n-1]);
}