//8.Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    
    if(num%100==0)
       printf("%d is not leap year",num);
    if(num%4==0 && num%400==0)
        printf("%d is leap year",num);
    printf("\n ");

    return 0;
}