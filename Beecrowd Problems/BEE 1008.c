#include<stdio.h>

int main()
{
    int number, day;
    float hour;
    double salary;

    scanf("%d %d %f", &number, &day, &hour);
    salary=day*hour;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf", salary);

    return 0;

}
