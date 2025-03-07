#include<stdio.h>

int main()
{
    char name[30];
    float salary;
    double sale ,total;

    scanf("%s %f %lf",&name, &salary,&sale);

    total=salary+sale*.15;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
