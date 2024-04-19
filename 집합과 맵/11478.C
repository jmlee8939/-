#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[1001];
int len;
char **save;

int compare (const void* a, const void* b) {
    char* A = *(char**)a;
    char* B = *(char**)b;
    return strcmp(A, B);
}


int main(void) {
    scanf("%s", s);

    len = strlen(s);
    int idx = 0;
    int s_cnt = 0;
    char **save;

    s_cnt = len * (len + 1) / 2;
    save = (char**)malloc(sizeof(char*)*s_cnt);

    for (int i=1; i<=len; i++) {
        for(int j=0; j<=len-i; j++) {
            save[idx] = (char*)malloc(sizeof(char)*(i+2));
            strncpy(save[idx], s+j, i);
            idx++;
        }
    }
    //int cnt = 0;
    //for (int i=0; i<idx; i++) {
    //    printf("%s ", str_arr[i].strc);
    //}
    //printf("\n%d %d\n", len, idx);

    qsort(save, idx, sizeof(char*), compare);

    int cnt = 1;
    //printf("%s ", save[0]);
    for (int i=1; i<idx; i++) {
        if (strcmp(save[i-1], save[i]) != 0) {
            //printf("%s ", save[i]);
            cnt++;
            }
    }
    printf("%d", cnt);
}