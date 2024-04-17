#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N, M;

typedef struct {
    char name[21];
} name;

name arr1[500001];
name arr2[500001];
name output[500001];

int compare(const void* a, const void* b)
{
	name num1 = *(name*)a;
	name num2 = *(name*)b;

	if (strcmp(num1.name, num2.name) < 0) {
		return -1;
	} else if (strcmp(num1.name, num2.name) > 0) {
		return 1;
	} else {
		return 0;
	} 
}



int main(void) {
    scanf("%d %d", &N, &M);

    for (int i = 0;i<N; i++) {
        scanf("%s", arr1[i].name);
    }

    for (int i = 0; i<M; i++) {
        scanf("%s", arr2[i].name);
    }

    qsort(arr1, N, sizeof(name), compare);
    qsort(arr2, M, sizeof(name), compare);

    int i = 0;
    int j = 0;
    int cnt = 0;
    while (i<N && j<M) {
        int flag = strcmp(arr1[i].name, arr2[j].name);
        if (flag == 0) {
            strcpy(output[cnt].name, arr1[i].name);
            cnt++;
            i++;
            j++;
        } else if (flag < 0) {
            i++;
        } else {
            j++;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i<cnt; i++) {
        printf("%s\n", output[i].name);
    }
}