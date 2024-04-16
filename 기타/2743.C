#include <stdio.h>
char s[101];

int main(void){
    scanf("%s", s);
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    printf("%d", i);
}