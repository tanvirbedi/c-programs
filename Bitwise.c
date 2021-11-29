#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// int a= 5 b =6;
//print f(%d %d %d a&b a!b a^b)
//
void main()
{
    int a = 5;
    int b = 6;
    printf("the value of a in binary form %d %d ", a & b, a ^ b);

    //a = 4 //  32 16 8 4 2 1   a = 6 a left sifth 3

    // b= 7

    // a =  0000 0100;
    // b = 0000 0111;
    // a&b = *  0000 0100;
    // a!b = +  0000 0111;

    // a = 0000 0110
    // 0110 0000
