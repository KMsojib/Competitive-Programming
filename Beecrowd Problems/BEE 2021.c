/*Read a value of floating point with two decimal places. This represents a monetary value. After this,
calculate the smallest possible number of notes and coins on which the value can be decomposed.
The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01.
Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
*/
#include<stdio.h>

int main()
{
    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);

    //calculation
    printf("NOTAS:\n");
    N=N/100;
    printf("%lf nota(s) de R$ 100,00/n",N);
    N=N%100;
    printf("%d nota(s) de R$ 50,00/n",N/50);
    N=N%50;
    printf("%d nota(s) de R$ 20,00/n",N/20);
    N=N%20;
    printf("%d nota(s) de R$ 10,00/n",N/10);
    N=N%10;
    printf("%d nota(s) de R$ 5,00/n",N/5);
    N=N%5;
    printf("%d nota(s) de R$ 2,00/n",N/2);
    N=N%2;
    printf("%d nota(s) de R$ 1.00/n",N);
}

