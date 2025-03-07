#include<stdio.h>

int main()
{
    float A,B,C;
    double pi=3.14159, rectangled,radius_circle,trapezium,squre,ractangle;

    scanf("%f%f%f", &A, &B, &C);

    rectangled=(0.5)*A*C;
    radius_circle=pi*C*C;
    trapezium=(0.5)*(A+B)*C;
    squre=B*B;
    ractangle=A*B;

    printf("TRIANGULO: %.3lf\n", rectangled);
    printf("CIRCULO: %.3lf\n",radius_circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", squre);
    printf("RETANGULO: %.3lf\n", ractangle);

    return 0;
}
