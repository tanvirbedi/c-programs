#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int i;
    int sum = 0;
    int arr[5] = {5, 10, 58, 69, 70};
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of the array is: %d\n", sum);
}