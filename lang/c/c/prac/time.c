#include<stdio.h>
struct time_struct{
    int hour;
    int minute;
    int second;
};

int main(void){
    struct time_struct st_time1;
    printf("%d,%d,%d\n",st_time1.hour, st_time1.minute, st_time1.second);

    struct time_struct st_time2;
    st_time2.hour = 12;
    st_time2.minute = 10;
    st_time2.second = 18;

    printf("%d,%d,%d\n",st_time2.hour, st_time2.minute, st_time2.second);

    return 0;
}

