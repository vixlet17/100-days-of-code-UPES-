// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
     int n;
     float sum,x;
     sum=0;
     x=0;
     printf("Enter number of terms you need: ");
     scanf("%d",&n);
     for (int i=1; i<=n; i++ )
     {
         x=(float)(2 * i ) / (4 * i-1);
         sum=sum+x;
     }
     printf("Sum of the series is %.1f",sum);
    return 0;
}
