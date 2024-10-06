
/// Creator: MD.Kawsar Mahmud

///------------------------------------Lecture 4-------------------------------------*/

///------------------------------ problem-1-----------------------------------*/

#include <stdio.h>
int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    int A = num1;
    int B = num2 / 10;
    int C = (num2 % 10) / 1;
    int D = num3 / 100;


    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
///*------------------------------ problem-2-----------------------------------*/


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int A = a/100;
    int B = (a%100)/1;
    int C = (b/10);
    int D = (b%10)/1;
    int E = (c/100);


    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}


/// /*------------------------------ problem-3-----------------------------------*/
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a ,&b, &c);

    int A = (a/10);
    int B = (a%10);
    int C = (b/10);

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);


    return 0;
}


// #include<stdio.h>
// int main()
// {
//     float a = 2.5, b = 0.0005, c = 3000;
//     printf("(a): ");
//     printf("%f %f %f\n", a, b, c);
//     printf("(b): ");
//     printf("%.4f %.4f %.4f\n",a, b, c);
//     printf("(c): ");
//     printf("%.3f %.3f %.3f\n",a, b, c);

//     return 0;
// }

/*

(a): 2.500000 0.000500 3000.000000
(b): 2.5000 0.0005 3000.0000
(c): 2.500 0.001 3000.000

*/

///*--------------------------------------------------- Program -----------------------------------------------------*/
/*
    Write a program to check whether a given character is a vowel or a consonant.
*/
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;
}

/*
    Create a program that inputs three numbers and prints the minimum among them.
*/
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a and b and c: " );
    scanf("%d%d%d",&a,&b,&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("A is Minimum");
        }
    }
    else if(b<a)
    {
        if(b<c)
        {
            printf("B is Minimum");
        }
    }
    else
    {
        printf("C is Minimum");
    }

    return 0;
}

/*
    Write a C program to take one non-negative integer as input and print the grade according to that
    input. The grade system is shown below:
    Grade System:
    0-32 → F
    33-39 → D
    40-49 → C
    50-59 → B
    60-69 → A-
    70-79 →  A
    80-100 → A+
*/
#include<stdio.h>

int main()
{
    int mark;
    printf("Enter you Mark: " );
    scanf("%d",&mark);

    if(mark>=80 && mark<=100)
    {
        printf("A+");
    }
    else if(mark>=70 && mark<=79)
    {
        printf("A");
    }
    else if(mark>=60 && mark<=69)
    {
        printf("A-");
    }
    else if(mark>=50 && mark<=59)
    {
        printf("B");
    }
    else if(mark>=40 && mark<=49)
    {
        printf("C");
    }
    else if(mark>=33 && mark<=39)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

/*
    Write a C program to input the week number (1-7) and print the corresponding day of week name using Switch Case
    Input:  3
    Output: Thursday
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;

    case 5:
        printf("Saturday");
        break;

    case 6:
        printf("Sunday");
        break;

    case 7:
        printf("Monday");
        break;
    default:
        break;
    }
    return 0;
}
