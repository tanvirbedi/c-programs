/**
 * @file sum100.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//import statemnet
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    
//method declaration
int sum1();
int sumR(int, int);
void sum();

//main method
void main()
{
    // sum(); //method call
    // int sum = sum1();
    // int sum = sumR(1, 0);
    // printf("sum of first 100 nos = %d\n", sum);
    printf("----------------------");

    int x;
    // x = getchar();
    // putchar(x);

    char s[100];
    gets(s);
    puts(s);
}

void sum() //method definition
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        // sum = i + sum;
        // sum = sum + i;
        sum += i;
        // printf("i: %d \n ", i);
    }
    {
        printf("sum of first 100 nos = %d\n", sum);
    }
    float avg = sum / (float)100;
    printf("sum of first 100 nos = %d\n", sum / 100);
    printf("Avg of first 100 nos = %f", avg);
}

int sum1()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        // sum = i + sum;
        // sum = sum + i;
        sum += i;
        // printf("i: %d \n ", i);
    }
    return 50;
}

int sumR(int i, int sum)
{
    if (i == 6) //base conditon
    {
        return sum;
    }

    return sumR(++i, sum + i);
}