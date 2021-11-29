
//wap to print whether  the poerson is indian and eligible to vote
#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    char nationality[50] = "INDIAN"; 
    printf("plz enter your nationality and age");
    scanf("%s %d", nationality, age);

    if (nationality == "indian")
    {
        if (age >= 18)
            printf(" you are an indian and eligible to vote ");
    }
    else
        printf("you are not eligible");
}