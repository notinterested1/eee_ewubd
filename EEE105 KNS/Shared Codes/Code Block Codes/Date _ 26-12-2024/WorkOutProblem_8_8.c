#include<stdio.h>

int main(void)
{

int i, j, k;
char first_name[10] = "Mohammed";
char second_name[10] = "Ainal";
char last_name[10] = "Khan";
char name[30];

for(i=0;first_name[i]!='\0';i++)
{
    name[i] = first_name[i];
}

name[i] = ' ';

for(j=0;second_name[j]!='\0';j++)
{
    name[i+j+1] = second_name[j];
}

name[i+j+1] = ' ';

for(k=0;last_name[k]!='\0';k++)
{
    name[i+j+k+2] = last_name[k];
}

name[i+j+k+2] = '\0';
printf("\n");
printf("%s", name);

return 0;

}
