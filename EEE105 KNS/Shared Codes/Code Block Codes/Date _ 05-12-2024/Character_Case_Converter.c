#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter an alphabet letter: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
         printf("Uppercase is '%c'", ch-32);
    else if(ch>='A' && ch<='Z')
         printf("Lowercase is '%c'", ch+32);
    else
         printf("Enter a correct alphabet letter");

    return 0;
}
