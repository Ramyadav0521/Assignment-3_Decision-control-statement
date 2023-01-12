/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
    int num,temp;//create a num variable
    
    printf("\nEnter a number: ");//display msg for user on output screen
    scanf("%d",&num);//values stored enter by user in num varaible 

    temp =num&1;
    if(temp!=0) //Applying condition 
       printf("\nGiven number %d is Odd number.",num);//printing the result 
    else
       printf("\nGiven number %d is Even number.",num);//printing the result 

    printf("\n ");//printing a new line

    return 0; //returing a zero value system 
}
