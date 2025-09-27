//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
int num,a,b,count=0;
printf("Enter a number: ");
scanf("%d",&num);
b=0;
while (num>0)
{
    a=num%2;
    num=num/2;
    b=b*10+a;
    count++;
}
  printf("Equivalent Binary representation of the number is ");
while (count>0)
{
   printf("%d", b%10);
   b=b/10;
   count--;
}

}
