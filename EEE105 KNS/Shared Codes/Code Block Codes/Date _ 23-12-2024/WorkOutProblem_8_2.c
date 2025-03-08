#include<stdio.h>
#include<conio.h>

int main(void)
{

char line[81], character;
int c=0;
printf("Enter text. Press <Return> at end\n");

do
{
    character = getchar();
    line[c] = character;
    c++;
}
while(character!='\n');

c = c-1;
line[c] = '\n';
printf("\n%s\n", line);

return 0;
}
