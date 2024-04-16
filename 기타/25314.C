#include <stdio.h>

int N;
int M;

int main(void){
    scanf("%d", &N);
    M = N/4;
    for(int i=0; i<M; i++){
        printf("long ");
    }
    printf("int");
}