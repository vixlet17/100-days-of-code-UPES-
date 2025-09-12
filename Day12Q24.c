/* Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/ 

#include <stdio.h>

int main() {
  int unit, bill;
  printf("Enter amount of units of electricity confused: ");
  scanf("%d", &unit);
  if (unit>=0 && unit<=100)
  {bill= unit*5;
  printf("Your electricity bill is of %d rupees", bill);}
   if (unit>=101 && unit<=200)
  {bill= (unit-100)*7 + 100*5;
  printf("Your electricity bill is of %d rupees", bill);}
   if (unit>=201 && unit<=300)
  {bill= (unit-200)*10 + 100*7 + 100*5;
  printf("Your electricity bill is of %d rupees", bill);}
  if (unit>300)
  {bill= (unit-300)*12 + 100*5 + 100*7 + 100*10;
  printf("Your electricity bill is of %d rupees", bill);}
    return 0;
}
