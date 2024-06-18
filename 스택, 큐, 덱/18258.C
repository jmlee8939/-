#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int arr[2000001];
int from = 0;
int to = 0;
int t_num = 0;
char order[6];
int N;

int main(void) {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%s", order);
        if (strcmp("push", order) == 0) {
            scanf("%d", &t_num);
            arr[to] = t_num;
            to++;
        } else if (strcmp("pop", order) == 0) {
            if (from == to) {
                printf("%d\n", -1);
            } else {
                printf("%d\n", arr[from]);
                from++;
            }
        } else if (strcmp("size", order) == 0) {
            printf("%d\n", to-from);
        } else if (strcmp("empty", order) == 0) {
            if (from == to) {
                printf("%d\n", 1);
            } else {
                printf("%d\n", 0);
            }
        } else if (strcmp("front", order) == 0) {
            if (from == to) {
                printf("%d\n", -1);
            } else {
                printf("%d\n", arr[from]);
            }
        } else if (strcmp("back", order) == 0) {
            if (from == to) {
                printf("%d\n", -1);
            } else {
                printf("%d\n", arr[to-1]);
            }
        }
    }
}


