#include <stdio.h>

int main()
{
    int a,b,s,d;
    scanf("%d%d%d",&a,&b,&s);
    d=(a+b+abs(a-b))/2;
    d=(d+s+abs(d-s))/2;

    printf("%d eh o maior\n",d);
    return 0;
}
