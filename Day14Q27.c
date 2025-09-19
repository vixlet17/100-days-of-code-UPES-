// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int a,i,sum,odd;
    printf("Enter a number: ");
    scanf("%d", &a);
    i=1;
    sum=0;
    odd=1;
    while (a>=i)
    {
        
        sum=sum+odd;
        odd+=2;
        i+=1;
    }
  printf("Sum of the first %d odd numbers is %d", a,sum);
    return 0;
}
