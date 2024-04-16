#include <stdio.h>
 
int arr[9][9];
int n; 
int max = 0;
int max_i = 0, max_j = 0;

int main(void) {
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            scanf("%d", &n);
            if (n > max) {
                max = n;
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", max_i + 1, max_j + 1);
}