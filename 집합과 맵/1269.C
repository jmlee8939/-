#include <stdio.h>
#include <stdlib.h>

int A, B;
int arr_a[200001];
int arr_b[200001];

int compare(const void* a, const void* b) {
    int n1 = *(int*)a;
    int n2 = *(int*)b;
    return (n1-n2);
}

int main(void) {
    scanf("%d %d", &A, &B);
    for (int i=0; i<A; i++) {
        scanf("%d", &arr_a[i]);
    }
    for (int i=0; i<B; i++) {
        scanf("%d", &arr_b[i]);
    }

    qsort(arr_a, A, sizeof(int), compare);
    qsort(arr_b, B, sizeof(int), compare);

    int i=0;
    int j=0;
    int flag;
    int cnt=0;
    while(i<A && j<B) {
        flag = arr_a[i] - arr_b[j];
        if (flag == 0) {
            cnt++;
            i++;
            j++;
        } else if (flag > 0) {
            j++;
        } else {
            i++;
        }
    }
    printf("%d", A+B-2*cnt);
}