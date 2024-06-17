#include <stdio.h>
#include <stdlib.h>

int arr[1000001];
int s_len = 0;
int N;
int cur_n;
int order;

int main(void) {
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        scanf("%d", &order);
        if (order == 1){
            scanf("%d", &cur_n);
            arr[s_len] = cur_n;
            s_len++;
        } else if (order == 2) {
            if (s_len > 0) {
                printf("%d\n", arr[s_len-1]);
                s_len--;
            }
            else {
                printf("%d\n", -1);
            }
        } else if (order == 3) {
            printf("%d\n", s_len);
        } else if (order == 4) {
            if (s_len == 0) {
                printf("%d\n", 1);
            } else {
                printf("%d\n", 0);
            }
        } else {
            if (s_len > 0) {
                printf("%d\n", arr[s_len-1]);
            } else {
                printf("%d\n", -1);
            }
        }
    }
}



