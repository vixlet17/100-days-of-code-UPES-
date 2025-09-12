/* Write a program to find profit or loss percentage given cost price and selling price. */ 

#include <stdio.h>

int main() {
  float cp, sp, percent;
  printf("Enter cost price: ");
  scanf("%f", &cp);
  printf("Enter selling price: ");
  scanf("%f", &sp);
  if (cp>sp)
  {percent= ((cp-sp)/cp)*100;
  printf("%f percent loss", percent);}
  else if (cp<sp)
  {percent= ((sp-cp)/cp)*100;
  printf(" %f percent profit", percent);}
  else 
  {printf("There is no profit or loss.");}
    return 0;
}
