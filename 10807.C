#include <stdio.h>

int arr[101];
int N;
int v;
int n = 0;

int main(void){
    scanf("%d", &N);
    for (int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for (int i=0;i<N;i++) {
        if (arr[i] == v) {
            n += 1;
        }
    }
    printf("%d", n);
}

