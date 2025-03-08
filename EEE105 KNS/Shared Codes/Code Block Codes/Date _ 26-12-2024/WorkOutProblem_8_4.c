#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(void)
{

char str[30];
int word=0;
int i=0, vow=0, cons=0;
printf("Enter a string \n");
gets(str);

while(str[i]!='\0')
{
    if (str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'||str[i]=='i'||str[i]=='I')
        vow++;
    else if (str[i]==' ')
        word++;
    else
        cons++;

    i++;
}
printf("\nNumber of the vowels = %d\n", vow);
printf("\nNumber of the consonant = %d\n", cons);
printf("\nNumber of the words = %d\n", word+1);

return 0;

}
