/* Write a program to display the day of the week based on a number (1–7) using switch-case. */ 

#include <stdio.h>

int main() {
  int choice;
  printf("Type a number between 1-12: ");
  scanf("%d", &choice);
  
  switch(choice)
  {
  case 1: printf("January\n");
  printf("Number of days: 31");
  break;
  case 2: printf("Feburary\n");
   printf("Number of days: 28");
  break;
  case 3:printf("March\n");
   printf("Number of days: 31");
  break;
  case 4:printf("April\n");
   printf("Number of days: 30");
  break;
  case 5:printf("May\n");
   printf("Number of days: 31");
  break;
  case 6:printf("June\n");
   printf("Number of days: 30");
  break;
  case 7:printf("July\n");
   printf("Number of days: 31");
   break;
  case 8:printf("August\n");
   printf("Number of days: 31");
   break;
  case 9:printf("September\n");
   printf("Number of days: 30");
   break;
    case 10:printf("October\n");
   printf("Number of days: 31");
  break;
   case 11:printf("November\n");
   printf("Number of days: 30");
   break;
    case 12:printf("December\n");
   printf("Number of days: 31");
   break;
  default: printf("Invalid\n");
  break;
  }
 
    return 0;
}
