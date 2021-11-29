#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// wap to print the addition of the 3*3 matrix;
void main()
{

    int i;
    int j;
    int FirstArr[3][3];
    int SecArr[3][3];
    int ThirdArr[3][3];

    //for 1st matrix
    printf("plz enter the elements of the  1st array\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &FirstArr[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", FirstArr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // for 2nd matrix
    printf("plz enter the elements of the 2nd matrix\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &SecArr[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", SecArr[i][j]);
        }
        printf("\n");
    }
    //FOR 3RD ARRAY

    printf("THE RESULTANT ARRAY IS : \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            ThirdArr[i][j] = FirstArr[i][j] + SecArr[i][j];
            printf("%d ", ThirdArr[i][j]);
        }
        printf("\n");
    }
}