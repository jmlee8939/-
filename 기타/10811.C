#include <stdio.h>

int N, M;
int from, to;
int arr[101]={0};
int p_arr[101]={0};

int main(void) {
    scanf("%d %d", &N, &M);

    for (int i = 1; i<=N; i++){
        arr[i] = i;
        p_arr[i] = i;
    }

    for (int i=0; i<M; i++){
        scanf("%d %d", &from, &to);
        for (int j=from; j<=to; j++){
            arr[j] = p_arr[to-j+from];
        }
        for (int j=from; j<=to; j++){
            p_arr[j] = arr[j];
        }
    }

    
    for (int i=1; i<=N; i++){
        printf("%d ", arr[i]);
    }
}

