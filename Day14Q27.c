// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int a,i,sum;
    printf("Enter a number: ");
    scanf("%d", &a);
    i=1;
    sum=0;
    while (a>=i)
    {
        
        sum=sum+i;
        i+=2;
    }
  printf("Sum of the first %d odd numbers is %d", a,sum);
    return 0;
}
