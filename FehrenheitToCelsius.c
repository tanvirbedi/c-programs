#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// (Temp-32)*5/9=celsius;

void main()
{
    double tempInCelsius = 0.0;
    double tempInFehr;
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%lf", &tempInFehr);
    tempInCelsius = (tempInFehr - 32) * ((double)5 / 9);
    printf("The Temparature in Celsius: %lf", tempInCelsius);
}