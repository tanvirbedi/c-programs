#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
    char c[5];
    int i;
    printf("plz enter the characters of the array\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%c", &c[i]);
    }
    printf("THE LETTERS ARE: \n");
    printf(strupr(c));
    // for (i = 0; i < 10; i++)
    //   {
}
