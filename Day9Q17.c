// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
  int a,b,c;
  float D,x1,x2;
  printf("For equation ax^2 + bx + c, enter values of a,b and c (with signs) ");
  scanf("%d %d %d", &a,&b,&c);
  D=pow(b,2) - 4*a*c;
  x1=(-b + sqrt(D))/(2*a);
  x2=(-b - sqrt(D))/(2*a);
  if(D>0)
  {printf("Roots are different and real. \n");
  printf("Roots are %f,%f", x1, x2);}
  else if(D==0)
  {printf("Roots are equal and real. \n");
      printf("Roots are %f,%f", x1, x2);
  }
  else
  {printf("Roots are complex. \n");}
  
    return 0;
}
