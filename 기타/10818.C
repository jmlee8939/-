#include <stdio.h>

int N;
int temp;
int max = -1000001;
int min = 1000001;

int main(void){
    scanf("%d", &N);
    for (int i=0;i<N;i++) {
        scanf("%d", &temp);
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }
    printf("%d %d", min, max);
}