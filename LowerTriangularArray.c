#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//wap to find sum of   lower triangular matrix
//take a 3*3 matrix
void main()
{
    int i, j;
    int sum = 0;
    printf("plz enter the elments of the 3*3 array: \n ");
    int arr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("FOLLOWING IS THE ARRAY: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i > j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("The sum of lower triangular array is:%d \n", sum);
}