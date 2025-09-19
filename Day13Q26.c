// Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int a,i;
    printf("Enter a number: ");
    scanf("%d", &a);
    i=1;
    while (a>=i)
    {
        printf("%d\n",i);
        i+=1;
    }

    return 0;
}
