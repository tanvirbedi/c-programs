#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    struct emp
    {
        int eno;
        char ename[20];
        float esalary;
    };
    struct emp e;
    printf("size of employee: %d\n ", sizeof(e));
}
