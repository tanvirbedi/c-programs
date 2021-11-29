#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// WAP to print the factorial of a n
// for example = 4! = 4*3*2*1 = 24;
void main()
{
    int n;
    int fact = 1;

    printf("plz enter a number \n");
    scanf("%d", &n);
    int num = n;

    while (n != 0)
    {
        fact = fact * n;
        n = n - 1;
    }

    printf("THE FACTORIAL OF %d is %d", num, fact);
}