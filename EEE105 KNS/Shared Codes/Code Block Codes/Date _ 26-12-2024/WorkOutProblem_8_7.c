#include<stdio.h>

int main(void)
{

char c;
printf("\n\n");

for(c=65;c<=122;c++)
{
    if(c>90 && c<97)
        continue;
    printf("|%d - %c", c, c);
}

printf("\n\n");

return 0;

}
