#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// wap to print the perfect number
//a perfect number is the number which is equal to the sum of its positive integers excluding the number itself
// for example 6 is the smallest perfect number
// 6 = 1+2+3;
void main()
{
    int number;
    int sum = 0;
    printf("plz enter a number");
    scanf("%d", &number);
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
    {
        printf("THE number is a perfect number");
    }
    else
    {
        printf("the number is not a perfect number");
    }
}
