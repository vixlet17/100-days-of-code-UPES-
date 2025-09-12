/* Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/ 

#include <stdio.h>

int main() {
  int days,fine;
  printf("Enter number of days late: ");
  scanf("%d", &days);
  if (days>=1 && days<=5)
  {fine= days*2;
  printf("You have to pay a fine of %d", fine);}
   if (days>=6 && days<=10)
  {fine= days*4;
  printf("You have to pay a fine of %d", fine);}
   if (days>=11 && days<=30)
  {fine= days*6;
  printf("You have to pay a fine of %d", fine);}
  if (days>30)
  {printf("Membership cancelled.");}
    return 0;
}
