// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    while (b!=0)
    {
       c=b;
       b=a%b;
       a=c;
    }
    printf("HCF of the 2 numbers is %d",a);
}
