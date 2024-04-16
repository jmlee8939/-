#include <stdio.h>

int N;

int main(void) {
    scanf("%d", &N);

    int f_max;
    int p_num;
    f_max = N/5;
    p_num = 0;

    for (int i=0; i<=f_max; i++) {
        if ((N-5*i)%3==0) {
            p_num = i+(N-5*i)/3;
        } 
    }
    if (p_num == 0) {
        printf("%d", -1);
    } else {
        printf("%d", p_num);
    }
}