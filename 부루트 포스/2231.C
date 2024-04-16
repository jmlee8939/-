#include <stdio.h>

int N;
int arr[8] = {0};

int main(void) {
    scanf("%d", &N);
    int t_n = N;
    int i = 0;

    while (t_n != 0) {
        t_n /= 10;
        i++;
    }

    for (int j=N-10*i; j<N; j++) {
        if (j<=0) {
            continue;
        }
        int k = j;
        int sum = 0;
        while (k != 0) {
            sum += k%10;
            k /= 10;
        }
        sum += j;

        if (sum == N) {
            printf("%d\n", j);
            return 0;
        }
    }

    printf("%d", 0);
}