#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// #define MIN(x, y) (x < y) ? (x) : (y);
void main()
{
    int num1, num2;
    printf("PLZ ENTER THE TWO NO.S: \n");
    scanf("%d %d", &num1, &num2);


    int min = MIN(num1, num2);
    printf("Minimum of both the no.s is:%d\n", min);
} //define MIN(x, y) (((x) < (y)) ? (x) : (y))
int min(num1, num2)
{

}
