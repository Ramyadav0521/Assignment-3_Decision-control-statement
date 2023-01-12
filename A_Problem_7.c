/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/

#include<stdio.h>
int main()
{
    int num1, num2,num3;
    printf("\nEnter a first number ");
    scanf("%d",&num1);

    printf("\nEnter a second number ");
    scanf("%d",&num2);

    printf("\nEnter a third number ");
    scanf("%d",&num3);

    num1=((num2*num2)-(4*num1*num3));

    if(num1>0)
    {
        printf("\nReal & Distinct roots");
    }
    if (num1<0)
    {
        printf("\nImaginary roots");
    }
    if(num1==0)
    {
        printf("\n real Roots & Equal");
    }
    return 0;
}