//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
   int number, a, b;
   printf("Enter a number: ");
   scanf("%d", &number);
   a=number;
   
   // calculating reverse of the number 
   int reverse=0;
   while (number > 0)
   {
       b=number%10;
       number=number/10;
       reverse=reverse*10+b;
   }
   
   //comparing reverse with number
   if (reverse == a)
   printf("%d is a palindrome.\n", a);
   else 
   printf("%d is not a palindrome.\n",a);
   return 0;
}
