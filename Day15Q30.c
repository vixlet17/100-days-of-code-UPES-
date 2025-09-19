//Write a program to reverse a given number.
#include <stdio.h>
int main()
{
int num,a,b;
printf("Enter a number: ");
scanf("%d",&num);
b=0;
while (num>0)
{
    a=num%10;
    b=a+b*10;
    num=num/10;
}
printf("Reversed number is %d",b);
}
