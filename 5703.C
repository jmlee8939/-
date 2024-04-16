#include <stdio.h>

int arr[3];

int main(void) {
    while(true) {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        if (arr[0]==0 && arr[1]==0 && arr[2]==0) {
            return 0;
        }
        int max = 0;
        int sum = 0;
        for (int i=0; i<3; i++) {
            if (arr[i]>max) {
                max = arr[i];
            }
            sum += arr[i];
        }
        if (max*2 >= sum) {
            printf("Invalid\n");
            continue;
        } else if (arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]) {
            if (arr[0]==arr[1] && arr[1]==arr[2]) {
                printf("Equilateral\n");
                continue;
            }
            else {
                printf("Isosceles\n");
                continue;
            }
        } else {
            printf("Scalene\n");
            continue;
        }
    }
}