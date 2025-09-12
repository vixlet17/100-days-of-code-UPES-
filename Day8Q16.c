// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
  int a,b,c;
  printf("Enter number 1: ");
  scanf("%d", &a);
  printf("Enter number 2: ");
  scanf("%d", &b);
  printf("Enter number 3: ");
  scanf("%d", &c);
  if(a>b&&a>c)
  {printf("First number is the largest number. \n");}
  else if(b>a&&b>c)
  {printf("Second number is the largest number.\n");}
  else
  {printf("Third number is the largest number.\n");}
    return 0;
}
