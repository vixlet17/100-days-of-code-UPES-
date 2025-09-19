// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n,i,f;
    printf("Enter a number: ");
    scanf("%d", &n);
    i=1;
    f=1;
    while (n>=i)
    {
        f=f*i;
        i+=1;
    }
    printf("The factorial of %d is %d", n,f);
    return 0;
}
