#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int m, n;
    printf("Enter m & n: row and column size");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("plz enter the elements of the array\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("elements of the array are\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}