/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("\nEnter a first number: ");
    scanf("%d",&num1);

    printf("\nEnter a second number: ");
    scanf("%d",&num2);

    printf("\nEnter a second number: ");
    scanf("%d",&num3);

    if(num1>num2 && num1 > num3)
        printf("\n%d is Greatest.",num1);
    if(num2>num1 && num2> num3)
        printf("\n%d is Greatest %d.",num2);
    if(num3>num1 && num3> num2)
        printf("\n%d is Greatest %d.",num3);

    printf("\n ");

    return 0;
}