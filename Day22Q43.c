// Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int num,x,y;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=num;
    int sum=0;
    
    while (num > 0)
    {
       x=num%10;
       int prod=1;
       for (int i=1; i <= x; i++)
       {
           prod=prod*i;
       }
       sum=sum+prod;
       num=num/10;
    }
    if (y == sum)
    printf("Number is a strong number.");
    else 
    printf("Number is not a strong number.");
    return 0;
}
