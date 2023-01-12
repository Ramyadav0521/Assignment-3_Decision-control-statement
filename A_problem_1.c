
//.1 Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if(num>=0)
        printf("\nGiven number %d is positive.",num);
    else
        printf("\nGiven number %d is non positive.",num);

    printf("\n ");
    return 0;
}