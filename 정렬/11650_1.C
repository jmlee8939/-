#include <stdio.h>
#include <stdlib.h>

int N;

typedef struct {
    int x;
    int y;
} Point;

int compare(const void *a, const void *b){
    Point A = *(Point *)a;
    Point B = *(Point *)b;

    if (A.x > B.x) {
        return 1;
    } else if (A.x == B.x) {
        if (A.y > B.y) {
            return 1;
        } else {
            return -1;
        }
    } else {
        return -1;
    }
}

int main(void) {
    Point P[1000001];
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d %d", &P[i].x, &P[i].y);
    }
    qsort(P, N, sizeof(Point), compare);
    for (int i=0; i<N; i++) {
        printf("%d %d\n", P[i].x, P[i].y);
    }
}