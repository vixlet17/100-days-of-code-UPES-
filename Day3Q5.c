//Write a program to convert temperature from Celsius to Fahrenheit

 #include <stdio.h>
 int main() 
 
 {
 int C, F;
 printf("ENTER TEMPERATURE IN CELSIUS: ");
 scanf("%d", &C);
 F=(C*9/5)+32;
 printf("Temperature in fahrenheit: ");
 printf("%d", F);
return 0;
 }
