#include <stdio.h>

int GCD(int A, int B) {
    int t_n;
    if (A >= B) {
        t_n = A;
        A = B;
        B = t_n;
    }
    t_n = A;
    while(B % A) {
        t_n = B % A;
        B = A;
        A = t_n;
    }
    return(t_n);
}

int N;
int arr[100001];
int now_num;
int prev_num = 0;
int prev_gcd = 0;
int t_diff;
int t_gcd;


int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &now_num);
        if (i == 0) {
            prev_gcd = now_num - prev_num;

        } else {
            t_diff = now_num - prev_num;

            printf("%d, 시작 \n",t_diff);
            prev_gcd = GCD(t_diff, prev_gcd); 
        }
        prev_num = now_num;
    }
    printf("%d", prev_gcd);
}


