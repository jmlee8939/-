#include <stdio.h>

int arr[43] = {0};
int t_num;
int mod;
int output = 0;

int main(void){
    for (int i=0; i<10; i++){
        scanf("%d", &t_num);
        mod = t_num % 42;
        if (arr[mod] != 1) {
            output++;
        }
        arr[mod] = 1;
    }
    printf("%d", output);
}