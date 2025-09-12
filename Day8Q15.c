// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
  char c;
  printf("Enter any character: ");
  scanf("%c", &c);
  if(c>='A'&&c<='Z')
  {printf("Character is an uppercase alphabet.\n");}
  else if(c>='a'&&c<='z')
  {printf("Character is a lowercase alphabet.\n");}
  else if(c>='0'&&c<='9')
  {printf("Character is a digit.\n");}
  else
  {printf("Character is a special character.\n");}
    return 0;
}
