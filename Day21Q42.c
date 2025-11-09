// Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum=0;
    
    for (i=1; i < num; i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    printf("Number is a perfect number.");
    else 
    printf("Number is not a perfect number.");
    return 0;
}
