// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d", &year);
    if (year%4==0)
    {if (year%100==0 && year%400!=0)
    {printf("Year is not a leap year.");}
    else 
    {printf("Year is a leap year.");}}
    else 
    {printf("Year is not a leap year.");}
    return 0;
}
