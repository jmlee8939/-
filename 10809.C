#include <stdio.h>

int arr[28]={0};
int t_num;
char s[101];

int main(void) {
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0') {
        t_num = s[i] - 'a';
        i++;
        if (arr[t_num] == 0) {
            arr[t_num] = i;
        }
    }
    
    for (int j=0; j<26; j++) {
        if (arr[j] != 0) {
            printf("%d ", arr[j]-1);
        }
        else {
            printf("-1 ");
        }
    }
}