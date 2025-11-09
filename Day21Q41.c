// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main ()
{
    int num, last, first, middle, digits,x,y,new1,power;
    printf("Enter a number: ");
    scanf("%d", &num);
    last=num%10;
    y=num;
    digits=0;
    while (y > 0)
    {
        x=y%10;
        digits++;
        y=y/10;
    }
    power=pow(10,digits-1);
    first=num/power;
    middle=num%power;
    middle=middle/10;
    new1=last*power+middle*10+first;
    printf("The new number is %d", new1);
    return 0;
}
