// Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    d=a;
    e=b;
    while (b!=0)
    {
       c=b;
       b=a%b;
       a=c;
    }
    int l;
    l= (d*e)/a;
    printf("LCM of the two numbers is %d",l);
}
