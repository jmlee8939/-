#include <stdio.h>
int hour, min;
int ctime;

int main(void){
    scanf("%d %d", &hour, &min);
    scanf("%d", &ctime);

    int t_min;
    int t_time;
    int r_hour;
    int r_min;

    t_min = min + ctime;
    t_time = t_min / 60;
    r_hour = (hour + t_time) % 24;
    r_min = t_min % 60;

    printf("%d %d", r_hour, r_min);
}