//2.Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);

     if(num%5==0)
        printf("\nGiven number %d is divisible by 5.",num);
    else
        printf("\nGiven number %d is not dividible by 5.",num);

    printf("\n ");

    return 0;
}
