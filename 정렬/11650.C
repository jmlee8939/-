#include <stdio.h>

int N;
int arr[100001][2];
int arr2[100001][2];

int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    
    for (int i=0; i<N; i++) {
        int x_min = 10001;
        int y_min = 10001; 
        int min_idx;
        int temp_x = arr[i][0];
        int temp_y = arr[i][1];
        for (int j=i; j<N; j++) {
            if (x_min >= arr[j][0] && y_min > arr[j][1]) {
                min_idx = j;
                x_min = arr[j][0];
                y_min = arr[j][1];
            }
        }

        arr[i][0] = arr[min_idx][0];
        arr[min_idx][0] = temp_x;
        arr[i][1] = arr[min_idx][1];
        arr[min_idx][1] = temp_y;
    }

    for (int i=0; i<N; i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
}