#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// qwap to print the fibonacci series till n number;
void main()
{
    int number;
    int n;
    int i;
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    printf("plz enter the number till u want to print the series\n");
    scanf("%d", &n);
    printf("%d %d ", num1, num2);

    for (i = 2; i < n; i++)

    {
        sum = (num1 + num2);
        printf("%d ", sum);
        num1 = num2;
        num2 = sum;
    }
}