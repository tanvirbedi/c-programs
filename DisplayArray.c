#include <stdio.h>
// WAP TO PRINT A DIMESIONAL ARRAY
// 2 5
// 8 9

void main()
{
    int i, j;

    int arr[2][2];
    printf("plz enter all the elments of the array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}