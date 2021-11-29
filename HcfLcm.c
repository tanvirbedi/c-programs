#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int HCF(int, int);
// num1=4
// num2=6
// hcf= 2
//lcm = 12

void main()
{
    int hcf = 0;
    int lcm = 0;
    int num1, num2;
    printf("Please input 2 no.s: \n ");
    scanf("%d %d", &num1, &num2);
    hcf = HCF(num1, num2);
    lcm = LCM(num1, num2);
    printf("The HCF is :%d\n", hcf);
    printf("The LCM is :%d\n", lcm);
    // LCM();
}

int LCM(int a, int b)
{
    for (int i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}

int HCF(int x, int y)
{
    for (int h = (x, y) ? x : y; h >= 1; h--)
    {
        if (x % h == 0 && y % h == 0)
        {
            return h;
        }
    }
}