#include <stdio.h>
//WAP TO ADD ALL THE ELEMENTS OF AN ARRAY
void main()
{
    int i;
    int sum = 0;
    int n;
    printf("PLZ ENTER THE NO. OF ELEMENTS OF ARRAY: \n");
    scanf("%d", &n);
    printf("plz enter all the elements");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("THE SUM OF %d ELEMENTS OF THE ARRAY IS: %d", n, sum);
}