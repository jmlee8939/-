#include <stdio.h>

int N;
int arr[10]={0};

int main(void)  {
    scanf("%d", &N);
    int t_n;
    while (N!=0) {
        t_n = N % 10;
        arr[t_n]++;
        N/=10;
    }
    for (int i=10; i>=0; i--) {
        for (int j=0; j<arr[i]; j++) {
            printf("%d", i);
        }
    }
}