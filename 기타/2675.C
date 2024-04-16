#include <stdio.h>

int N;
int rep;
char s[21];

int main(void) {
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d %s", &rep, s);
        int j = 0;
        while (s[j]!='\0') {
            for (int k=0; k<rep; k++) {
                printf("%c", s[j]);
            }
            j++;
        }
        s[0] = '\0';
    }
}