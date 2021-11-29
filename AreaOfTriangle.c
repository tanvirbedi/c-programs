#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// area =sqrt{s(s-a)(s-b)(s-c)}
// where s = semi perimeter ; (a+b+c)/2;t
void main()
{
    double area = 0.0;
    double a, b, c, s;
    printf("Plz enter the 3 sides of a triangle\n ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    printf("Semimeter of the triangle is : %lf\n ", s);
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle is : %lf\n ", area);
}