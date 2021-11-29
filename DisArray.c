#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//WAP TO MAKE *3 MATRIX
//5 6
//7 8
//9 6
// M= ROWS=3
//N=COLUMNS=2
void main()
{
    int i;
    int j;
    int m = 3;
    int n = 2;
    int arr[m][n];
        printf("plz enter the elments for the matrix \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    getch();
}