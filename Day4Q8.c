// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    int n;
    float S;
    printf("Enter a number : ");
    scanf("%d", &n);
    S= (2 + (n-1))*n/2;
    printf("Sum of first %d ", n );
    printf("natural numbers is %f", S);
    return 0;
}
