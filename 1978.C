#include <stdio.h> 

int N;
int T_N;
int output=0;

int main(void) {
    scanf("%d", &N);

    for (int i=0; i<N; i++){
        scanf("%d", &T_N);
        int k = 0;
        for (int j=1;j<=T_N;j++) {
            if (T_N%j==0) {
                k++;
            } 
        }
        if (k == 2) {
            output++;
        }
    }
    printf("%d", output);
}