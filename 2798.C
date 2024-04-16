#include <stdio.h>

int N, M;
int arr[1000000];
int sum = 0;
int diff;

int main(void) {
    scanf("%d %d", &N, &M);
    diff = M;
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j=0; j<N-2; j++) {
        for  (int k=j+1; k<N-1; k++) {
            for (int m=k+1; m<N; m++) {
                sum = arr[j] + arr[k] + arr[m];
                if (M - sum == 0) {
                    printf("%d", sum);
                    return 0;
                } else if (M - sum < diff && M - sum > 0) {
                    diff = M - sum;
                }
            }
        }
    }
    printf("%d", M-diff);
}