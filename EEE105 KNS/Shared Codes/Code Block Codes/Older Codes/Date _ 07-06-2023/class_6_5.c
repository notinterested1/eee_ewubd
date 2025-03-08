#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);

    switch(x)
    {
        case 'a':
        case 'e':
        case 'i':printf("Vowel");
                 break;

        case 'o':printf("Vel");
                 break;
        case 'u':printf("Vowel");
                 break;
        default: printf("Consonant");
    }
}

