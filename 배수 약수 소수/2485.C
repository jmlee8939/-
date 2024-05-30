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
int now_num, start_n, finish_n;
int prev_num = 0;
int prev_gcd = 1;
int t_diff;
int output = 0;


int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &now_num);
        //printf("현재 숫자 : %d\n", now_num);
        if (i == 0) {
            start_n = now_num;
        } else {
            t_diff = now_num - prev_num;
            if (i == 1) {
                prev_gcd = t_diff;
            }
            if (i==N-1) {
                finish_n = now_num;
            }
            //printf("값 차이 : %d, 이전 GCD : %d \n", t_diff, prev_gcd);
            prev_gcd = GCD(t_diff, prev_gcd); 
            //printf("현재 GCD : %d \n", prev_gcd);
        }
        prev_num = now_num;
    }
    output = (finish_n - start_n)/prev_gcd + 1 - N;
    printf("%d", output);
}


