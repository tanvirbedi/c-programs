#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int num;
    int reverse = 0;
    int remainder;
    printf("Plz enter a  no. :\n ");
    scanf("%d", &num);
    int temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }
    printf("The reverse of the no. u entered is %d\n", reverse);
    if (temp == reverse)
    {
        printf(" it is a Palindrome no. ");
    }
    else
    {
        printf("Not a palindrome");
    }
}