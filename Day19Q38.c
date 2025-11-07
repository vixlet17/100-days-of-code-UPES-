// Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum,x;
    sum=0;
    while (num !=0)
{
    x=num%10;
    sum=sum + x;
    num=num/10;
}
printf("Sum of the digits is %d", sum);
return 0;
}
