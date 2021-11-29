#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// a= 5;
// b = 6;
void main()
{
    int a, b, c;
    printf("Plz enter the no.s to be swapped\n ");
    scanf("%d %d", &a, &b);
    printf("The value of a before swapping is %d \n", a);
    printf("The value of b before swapping is %d \n", b);
    c = b; //(c = 6)
    b = a; //( b = 5 )
    a = c;

    printf("The value of a after swapping: %d\n", a);
    printf("The value of b after swapping: %d\n", b);
}