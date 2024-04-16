#include <stdio.h>
#include <stdlib.h>

int N;
int type = 0;

typedef struct {
    int value;
    int order;
    int sorted_idx;
} Coord ;

int compare (const void *a, const void *b) {
    Coord A = *(Coord *)a;
    Coord B = *(Coord *)b;

    if (type == 0) {
        if (A.value > B.value) {
            return 1;
        } else if (A.value < B.value) {
            return -1;
        } else {
            return 0;
        }
    } else {
        if (A.order > B.order) {
            return 1;
        } else if (A.order < B.order) {
            return -1;
        } else {
            return 0;
        }
    }
}

int main(void) {
    scanf("%d", &N);
    Coord* arr = (Coord*)calloc(N, sizeof(Coord));
    
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i].value);
        arr[i].order = i;
    }

    qsort(arr, N, sizeof(Coord), compare);
    
    int j = 0;
    for (int i=0; i<N; i++) {
        if (i==0) {
            arr[i].sorted_idx = j;
        } else {
            if (arr[i-1].value != arr[i].value) {
                j++;
            } 
            arr[i].sorted_idx = j;
        }
    }
    
    type = 1;

    qsort(arr, N, sizeof(Coord), compare);
    
    for (int i=0; i<N; i++) {
        printf("%d ", arr[i].sorted_idx);
    }
}
