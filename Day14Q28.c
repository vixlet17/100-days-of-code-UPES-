// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int a,i,product;
    printf("Enter a number: ");
    scanf("%d", &a);
    i=2;
    product=1;
    while (a>=i)
    {
        
        product=product*i;
        i+=2;
    }
  printf("product of even numbers uptill %d = %d",a,product);
    return 0;
}
