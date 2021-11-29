#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int num;
    int sum = 0;
    int remainder;
    printf("plz enter a no.");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 10;
        sum = (sum * 10) + remainder;
        num = num / 10;
    }
    printf("Reverse of the no. u entered is %d :", sum);
}
// int a= 5 b =6;
//print f(%d %d %d a&b a!b a^b)

//