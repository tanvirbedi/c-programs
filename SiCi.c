#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

// SI = (prt)/100;
// CI = A - P;
// A = p(1+r/100)^t;
void main()
{
    double SI = 0.0;
    double CI = 0.0;
    double Amt = 0.0;
    double p, r, t;
    printf("Plz enter the principal, rate, time ");
    scanf("%lf %lf %lf", &p, &r, &t);
    SI = (p * r * t) / 100;
    Amt = p * (pow((1 + r / 100), (t)));
    CI = (Amt - p);
    printf("THE SIMPLE INTEREST %fl", SI);
    printf("THE COMPOUND INTEREST %fl", CI);
}