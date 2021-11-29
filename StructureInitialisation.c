#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// for double %lf
//for float %f
// for
struct emp
{
    int eno;
    char ename[20];
    float esalary;
    double exy;
};
struct emp e;
void main()
{
    struct emp e = {102, "tanvir", 10245, 10.25};
    printf("Employee number: %d\n", e.eno);
    printf("Employee name: %s\n", e.ename);
    printf("Employee salary %f\n", e.esalary);
    printf("Employee detail %lf\n", e.exy);
}