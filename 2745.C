#include <stdio.h>

char s[10000000];
int b;
int output = 0;

int main(void) {
    scanf("%s %d", s, &b);

    int i = 0;
    while (s[i] != '\0') {
        output *= b;
        if (s[i] >= '0' && s[i] <= '9') {
            output += s[i] - '0';
        } else {
            output += s[i] - 'A';
            output += 10;
        }
        i++;
    }
    printf("%d", output);
}