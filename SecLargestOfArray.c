#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int i;
    int largest;
    int arr[5];
    printf("plz enter 5 numbers: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest number of the array is: %d\n", largest);
    int seclargest = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > seclargest && arr[i] < largest)
        {
            seclargest = arr[i];
        }
    }
    printf("The Second largest number of the array is: %d \n", seclargest);
}