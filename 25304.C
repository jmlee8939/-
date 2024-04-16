#include <stdio.h>

int cost, num;
int t_cost, t_num;
int output;

int main(void){
    output = 0;
    scanf("%d", &cost);
    scanf("%d", &num);

    for(int i=0;i<num;i++){
        scanf("%d %d", &t_cost, &t_num);
        output += t_num * t_cost;
    }
    
    if(output == cost){
        printf("Yes");
    }else{
        printf("No");
    }
}

