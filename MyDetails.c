/**
 * @file MyDetails.c
 * @author Tanvir Kour
 * @brief Enter user details and display them
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
void main()
{
    char name[100];
    char address[100];
    printf("Please enter your name:\n");
    scanf("%s", &name);
    printf("Your name is: %s\n", name);
    printf("Please enter your address:\n");
    scanf("%s", &address);
    printf("Your address is:%s\n", address);
}