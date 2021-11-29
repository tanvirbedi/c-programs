/**
 * @file Sphere.c   
 * @author Tanvir Bedi
 * @brief Area and Volume of Sphere
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//AREA = 4*PI*r^2;
//Volume = (4*PI*r^3)/3;
#include <stdio.h>
#include <math.h>
#define PI 3.14

void calculateArea(double r);
void calculateVolume(double r);
void main()
{
    double r;
    printf("ENTER THE RADIUS\n");
    scanf("%lf", &r);
    calculateArea(r);
    calculateVolume(r);
}

void calculateArea(double r)
{
    double area = 0.0;
    area = 4 * PI * (pow(r, 2));
    printf("AREA OF THE SPHERE:%lf\n", area);
}

void calculateVolume(double r)
{
    double volume = 0.0;
    volume = (4 * PI * (pow(r, 3))) / 3;
    printf("VOLUME OF THE SPHERE:%lf", volume);
}