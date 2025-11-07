// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int prod,x;
    prod=1;
    while (num !=0)
{
    x=num%10;
    if (x%2 !=0)
    {prod=prod*x;}
    else 
    {prod=prod*1;}
    num=num/10;
}
printf("Product of the odd digits is %d", prod);
return 0;
}
