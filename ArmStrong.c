#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//wap to print armstrong number
// an armstrong number is sum of the cubes of the digits

void main()
{
    int number;
    int sum = 0;
    int reverse = 0;
    int remainder = 0;
    int arm = 0;
    printf("plz enter a number:\n");
    scanf("%d", &number);
    int n = number;
    while (number != 0)
    {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
        arm = arm + (remainder * remainder * remainder);
    }

    if (n == arm)
    {
        printf("the no. u entered is an armstrong number/n");
    }
    else
    {
        printf("The no. u entered is not an armstrong number\n");
    }

    printf("REVERSE OF THE NUMBER IS:%d \n", reverse);
    getch();
}