#include <stdio.h>
#include <conio.h>
// WAP TO PRINT MULTIPLICATION OF ALL THE DIGITS OF A NUMBER
void main()
{
    int number;
    int product = 1;
    int reverse = 0;
    int remainder;
    printf("PLZ ENTER A NUMBER: ");
    scanf("%d", &number);
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;

        reverse = reverse * 10 + remainder;
        product = product * remainder;
    }
    printf("THE REVERSE OF THE NUMBER IS: %d\n ", reverse);
    printf("THE PRODUCT OF THE DIGITS IS: %d \n ", product);
}