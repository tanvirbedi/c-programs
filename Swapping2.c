#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
// a= 5
//b = 6
{
    int a, b;
    printf("Plz enter two no.s \n");
    scanf("%d %d", &a, &b);
    printf("The value of a before swapping is: %d\n ", a);
    printf("The value of b before swapping is: %d\n ", b);
    a = a + b; //a(11)
    b = a - b; //b( 11 - 6 = 5);
    a = a - b;
    printf("The value of a after swapping is: %d\n ", a);
    printf("The value of b after swapping is: %d\n", b);
}
