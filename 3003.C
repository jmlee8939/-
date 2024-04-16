#include <stdio.h>

int chess[6] = {1, 1, 2, 2, 2, 8}; 
int num;

int main(void){
    for (int i=0; i<6; i++){
       scanf("%d", &num);
       printf("%d ", chess[i] - num);
    }
}