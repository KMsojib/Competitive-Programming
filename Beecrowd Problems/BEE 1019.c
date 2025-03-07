#include<stdio.h>

int main()
{
    int time,hours,minutes,seconds;

    printf("Enter the time:");
    scanf("%d",&time);

    //calculation
    hours=time/3600;
    seconds=time%3600;
    minutes=seconds/60;
    seconds=seconds%60;
    printf("%d:%d:%d\n",hours, minutes,seconds);

    return 0;
}
