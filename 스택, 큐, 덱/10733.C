#include <stdio.h>

int N;
int arr[100001];
int p_n;
int idx=0;
int sum=0;

int main(void) {
    scanf("%d", &N);
    
    for (int i=0; i<N; i++) {
        scanf("%d", &p_n);
        if (p_n == 0) {
            idx--;
        } else {
            arr[idx] = p_n;
            idx++;
        }
    }

    for (int j=0; j<idx; j++) {
        sum += arr[j];
        //printf("%d \n", arr[j]);
    }
    printf("%d", sum);
}