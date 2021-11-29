#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Emp e;
struct Emp
{ 
    int eno;  //8
    double inc; //8
    float esalary; //8
    char ename[2]; //4
};
void main()
{

    printf("SIZE OF THE VARIABLE e IS %d", sizeof(e));
}