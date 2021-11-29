#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//wap to insert an element into the array
void main()
{
    int i;
    int n;
    int key;
    int loc;
    printf("plz enter the no. of elements to be stored in the array");
    scanf("%d", &n);
    int arr[n];
    printf("plz enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("plz enter the element to insert\n");
    scanf("%d", &key);
    printf("plz enter the location where u want to insert the key element");
    scanf("%d", &loc);
    for (i = (n - 1); i > loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = key;
    for (i = 0; i < n; i++)
    {
        printf(" %d \t", arr[i]);
    }
}