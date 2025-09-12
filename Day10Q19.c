/* Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. */ 

#include <stdio.h>

int main() {
  int side1,side2,side3;
  printf("Enter length of side 1 of the triangle: ");
  scanf("%d", &side1);
  printf("Enter length of side 2 of the triangle: ");
  scanf("%d", &side2);
  printf("Enter length of side 3 of the triangle: ");
  scanf("%d", &side3);
  
  if (side1==side2 && side2==side3)
  {printf("This is an Equilateral triangle.");}
  else  if (side1==side2 && side1!=side3 || side2==side3 && side2!=side1 || side1==side3 && side1!=side2)
  {printf("This is an Isoceles triangle.");}
   else
  {printf("This is a Scalene triangle.");}
    return 0;
}
