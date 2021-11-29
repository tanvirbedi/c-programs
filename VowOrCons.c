#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// WAP TO PRINT THE WHETHER THE LETTER ENTERED IS A VOWEL OR ALPHABET
void main()
{

    char letter;
    printf("plz enter  the letter:(a to z)");
    scanf("%c", &letter);

    switch (letter)
    {

    case 'a':
        printf("Its a vowel");
        break;
    case 'e':
        printf("Its a vowel");
        break;
    case 'i':
        printf("Its a vowel");
        break;
    case 'o':
        printf("Its a vowel");
        break;
    case 'u':
        printf("Its a vowel");
        break;
    default:
        printf("Its a consonent\n");
        printf("THANK YOU");
    }
}