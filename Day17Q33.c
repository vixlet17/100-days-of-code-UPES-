//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
  int number, a,b,c,d;
  int count=0;
  
  // Getting the number and storing it
  printf("Enter a number: ");
  scanf("%d",&number);
  a=number;
  b=number;
  
  // Counting number of digits
  while (number > 0)
  {
      c= number % 10;
      number= number/10;
      count++;
  }
 

    // Calculating 
    int sum=0;
    while (a > 0)
    {
    d= a % 10;
    a= a / 10;
    sum= sum + pow(d,count);
    }
    
    // Checking 
    if (sum == b)
    printf("%d is an armstrong number", b);
    else 
    printf("%d is not an armstrong number", b);
    return 0;
}
