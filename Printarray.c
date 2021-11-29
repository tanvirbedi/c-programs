#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int m, n;
    printf("plz enter the no. of rows and column\n");
    scanf("%d %d", &m, &n);
    char a[m][n];
    printf("plz enter the elements of the array  ");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c  ", a[i][j]);
        }
        printf("\n");
    }
}