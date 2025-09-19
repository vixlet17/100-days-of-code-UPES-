// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    int a;
    int b,c,d;
    printf("1:addition\n2:subtraction\n3:multiplication\n4:division\n5:modulus\n");
    printf("Enter your option: ");
    scanf("%d", &a);
    printf("Enter number 1: ");
    scanf("%d", &b);
    printf("Enter number 2: ");
    scanf("%d", &c);
    switch(a)
    {
        case 1: 
        {d=b+c;
        printf("We get %d as the answer when we add %d and %d", d,b,c);
        break;
        }
        
        case 2:
        {d=b-c;
        printf("We get %d as the answer when we subtract %d from %d", d,c,b);
        break;}
        
        case 3:
        {d=b*c;
        printf("We get %d as the answer when we multiply %d by %d", d,b,c);
        break;}
        
        case 4: 
         {d=b/c;
        printf("We get %d as quotient when we divide %d by %d", d,b,c);
        break;}
        
        case 5:
        {d=b%c;
        printf("We get %d as remainder when we divide %d by %d", d,b,c);
        break;}
        
        default:
        {printf("Invalid");
        break;}
    }
    return 0;
}
