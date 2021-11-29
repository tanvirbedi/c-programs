#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//WAP to print largest of the arrray no.s
void main()
{
    int i;
    int largest;
    int arr[5];
    printf("plz eneter the numbers for the array: \n");
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
    printf("the largest no. of the array is: %d\n", largest);
}