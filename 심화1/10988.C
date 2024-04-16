#include <stdio.h>

char s[101];

int main(void) {
    scanf("%s", s);

    int len=0;
    while (s[len] != '\0'){
        len++;
    }

    for (int i = 0; i<len/2+1; i++) {
        if (s[i] != s[len-1-i]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}