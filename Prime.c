#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void PrimeNum(int x);
// like 2 is a prime no. haing only 2 fators which is 1 and itself
void main()
{
    int num1;
    printf("Plz enter a no. \n");
    scanf("%d", &num1);
    PrimeNum(num1);
}

void PrimeNum(int x)
{
    int counter = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        printf("THE NO. U ENTERED IS A PRIME NO.");
    }
    else
        printf("THE NO. U ENTERED IS NOT A PRIME NO.");
}
