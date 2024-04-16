#include <stdio.h>

int N;
char num[101];
int output = 0;

int main(void) {
    scanf("%d", &N);
    scanf("%s", num);

    for (int i=0; i<N; i++) {
        output += (int) num[i] - 48;
    }
    printf("%d", output);
}