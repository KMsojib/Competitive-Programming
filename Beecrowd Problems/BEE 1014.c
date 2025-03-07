#include<stdio.h>

int main()
{
    double X,Y,average;
    scanf("%lf%lf", &X,&Y);

    average=X/Y;
    printf("%.3lf km/l\n", average);

    return 0;
}
