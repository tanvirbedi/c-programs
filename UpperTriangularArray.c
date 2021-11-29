#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//WAP TO FIND THE SUM OF UPPER TRIANGULAR ARRAY
// 1ST MAKE A 3*3 MATRIX
void main()
{
    int sum = 0;
    int i;
    int j;
    printf("PLZ ENTER THE ELEMENTS OF THE 3*3 MATRIX: \n");
    int arr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("THE MATRIX IS:\n");
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
            if (i < j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("SUM OF UPPER DIAGONAL ELEMENTS is %d  \n", sum);
}
