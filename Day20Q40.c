//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a binary number: ");
    scanf("%d",&num);
    int x,rev;
    rev=0;
    int temp,count,printed,digit;
    temp=num;
    count=0;
    while (temp > 0)
    {
      temp = temp/10;
      count++;
    }
    while (num > 0)
{
    x=num%10;
    rev=x+rev*10;
    num=num/10;
}
printed=0;
printf("1's complement: ");
while (rev > 0)
{
   digit=rev % 10;
   if (digit == 0)
   {printf("1");}
   else if (digit==1)
   {printf("0");}
   printed++;
   rev=rev/10;
}
if (count > printed)
printf("1");
return 0;
}

