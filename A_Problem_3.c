/* Write a program to check whether a given number is an even number or an odd
number */
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if(num%2==0)
       printf("\nGiven number %d is Even number.",num);
    else
       printf("\nGiven number %d is Odd number.",num);

    printf("\n ");

    return 0;
}