#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//program to print days of the week using switch case
void main()
{
    int num;
    clrscr();
    printf("plz enter the week number(1 to 7):");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Its monday");
        break;
    case 2:
        printf("Its tuesday");
        break;
    case 3:
        printf("Its wednesday");
        break;
    case 4:
        printf("Its thursday");
        break;
    case 5:
        printf("Its friday");
        break;
    case 6:
        printf("Its saturday");
        break;
    case 7:
        printf("Its sunday");
        break;
    default:
        printf("wrong input");
    }
    getch();
}