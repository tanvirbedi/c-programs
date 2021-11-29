#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// WAP TO PRINT THE PRODUCT OF TWO ARRAY
void main()
{
    int i;
    int j;
    int k;
    int sum = 0;
    int frstarr[3][3];
    int secarr[3][3];
    int thrdarr[3][3];
    // 1st matrix
    printf("PLZ enter the elements of the matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &frstarr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", frstarr[i][j]);
        }
        printf("\n");
    }
    // 2nd array
    printf("plz enter the 2nd array \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &secarr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", secarr[i][j]);
        }
        printf("\n");
    }
    // 3rd array
    printf("THE PRODUCT OF THE ABOVE TWO ARRAY IS: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)

            {
                sum = sum + frstarr[i][k] * secarr[k][j];
                thrdarr[i][j] = sum;
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}