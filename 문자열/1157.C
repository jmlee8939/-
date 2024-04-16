#include <stdio.h>

char s[1000001];
char a;
int alp[100] = {0};
int max = 0;
char max_a;
int same = 0;

int main(void) {
    scanf("%s", s);
    int i = 0;
    while (s[i] != '\0') {
        a = s[i];
        if (a > 'Z') {
            a = a -32;
        }
        alp[a]++;
        i++;
    }
    for (int j=0; j<100; j++) {
        if (alp[j] == max) {
            same = 1;
        } else if (alp[j] > max) {
            max = alp[j];
            max_a = j;
            same = 0;
        }
    }
    if (same == 1) {
        printf("?");
    } else {
        printf("%c", max_a);
    }
}