#include <stdio.h>

int arr[31] = {0};
int t_num;

int main(void){
    for (int i=0; i<28; i++) {
        scanf("%d", &t_num);
        arr[t_num] = 1;
    }
    for (int i=1; i<=30; i++) {
        if (arr[i] == 0) {
            printf("%d ", i);
        }
    }
}
