#include <stdio.h>

int N;
int t_x, t_y;
int min_x, min_y;
int max_x, max_y;

int main(void){
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d %d", &t_x, &t_y);
        if (i == 0) {
            min_x = t_x;
            max_x = t_x;
            min_y = t_y;
            max_y = t_y;
        }
        else {
            if (t_x < min_x) {
                min_x = t_x;
            }
            if (t_x > max_x) {
                max_x = t_x;
            }
            if (t_y < min_y) {
                min_y = t_y;
            }
            if (t_y > max_y) {
                max_y = t_y;
            }
        }
    }
    printf("%d", (max_y-min_y)*(max_x-min_x));
}