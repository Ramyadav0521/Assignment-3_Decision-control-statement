/*66. Write a program to print greater between two numbers. Print one number if both are
the same.*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\nEnter a first number: ");
    scanf("%d",&num1);

    printf("\nEnter a second number: ");  
    scanf("%d",&num2);

    if(num1>num2)
        printf("\n%d is Greater than %d.",num1,num2);
    else if(num2>num1)
        printf("\n%d is Greater than %d.",num2,num1);
    else
        printf("\nBoth the numbers are same %d.",num1);
    printf("\n ");

    return 0;
}
