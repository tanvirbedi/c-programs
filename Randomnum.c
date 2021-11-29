#include <stdio.h>
#include <stdlib.h>
void MyRand();
int main()
{
    rand();
}

void myRand()
{
    int n, rn;
    rn = rand() % 100;
    printf("the random no. is %d\n", rn);
    printf("plz enter a no. bw 1 to 100: \n");
    scanf("%d", &n);
    if (n > rn)
    {
        printf("The no. u entered is greater than the random no.");
    }
    else if (n < rn)
    {
        printf("the no. u entered is smaller than the random no.");
    }
    else
    {
        printf("the no. is matched");
        /* code */
    }
}