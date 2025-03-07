#include<stdio.h>

int main()
{
    int code1,unit1,code2,unit2;
    float price1, price2, total;

    scanf("%d %d %f", code1, unit1, price1);
    scanf("%d %d %f", code1, unit2, price2);

    total=(unit1*price1)+(unit2*price2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
