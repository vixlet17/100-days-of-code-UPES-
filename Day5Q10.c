// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int seconds,h,m,s,a;
    printf("Enter time in seconds: ");
    scanf("%d",&seconds);
    h=seconds/3600;
    a=seconds % 3600;
    m= a/60;
    s=a%60;
    printf("Time in hours:minutes:seconds format: %d", h);
    printf(":%d",m);
     printf(":%d",s);
    return 0;
}
