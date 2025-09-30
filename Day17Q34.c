//Write a program to check if a number is prime.
#include <stdio.h>


int main() 
{
 int number;
 
 // getting input
 printf("Enter a number: ");
 scanf("%d", &number);
 int i=2;
 //checking if number is prime
 
 if (number <= 1)
 printf("Number is neither prime nor composite.");
 else 
 {
int prime=1;
 while (i < number)
 {
 if (number % i == 0)
 {prime=0;
 break;}
 i++;
 }
 if (prime==1)
printf("Number is prime.");
else 
printf("Number is composite.");
}

}
