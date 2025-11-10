// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
     int n;
     float sum,x;
     sum=1;
     x=0;
     printf("Enter number of terms you need: ");
     scanf("%d",&n);
     for (int i=2; i<=n+1; i++ )
     {
         x=(float)(2 * i - 1) / (2 * i);
         sum=sum+x;
     }
     printf("Sum of the series is %.1f",sum);
    return 0;
}
