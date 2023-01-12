//5.Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if(num>99 && num<1000)
       printf("\nGiven number %d is three digit number.",num);
    else
       printf("\nGiven number %d is not three digit number.",num);

    printf("\n ");

    return 0;
}