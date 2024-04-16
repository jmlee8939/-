#include <stdio.h>

int N;
int max = 0;
int t_num;
int arr[1001];
float avg = 0;

float new_score(int tn, int maxi){
    return (float)tn/maxi*100;
}

int main(void) {
    scanf("%d", &N);

    for (int i=1; i<=N; i++) {
        scanf("%d", &t_num);
        if (t_num > max) {
            max = t_num;
        }
        arr[i] = t_num;
    }

    for (int i=1; i<=N; i++) {
        avg += new_score(arr[i], max);
    }
    avg /= N;
    printf("%f", avg);
}