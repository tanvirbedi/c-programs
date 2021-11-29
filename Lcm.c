#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//a=4;b=6
void main()
{
    int LCM = 0;
    int num1, num2;
    printf("plz enter the no.s \n");
    scanf("%d %d", &num1, &num2);
    for (int i = 1; i <= (num1 * num2); i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            printf("The LCM of the no.s is: %d", i);
            break;
        }
    }
}
