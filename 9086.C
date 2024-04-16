#include <stdio.h>

int N;
char s[1001];
char s2[2];


int main(void) {
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%s", s);
        printf("%c", s[0]);
        
        int j = 0;
        while (s[j] != '\0') {
            j++;
        }
        printf("%c\n", s[j-1]);
    }
}
