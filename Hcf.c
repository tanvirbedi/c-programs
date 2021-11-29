#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// num1 = 6; num2 = 4;
// HCF = 1 to min of(num1 & num2);

void main()
{
    int num1, num2, H;

    printf("PLZ ENTER TWO NO.S \n");
    scanf("%d %d", &num1, &num2);

    for (H = num1 < num2 ? num1 : num2; H >= 1; H--)
    {
        if (num1 % H == 0 && num2 % H == 0)
            break;
    }

    printf("The HCF is: %d", H);
}