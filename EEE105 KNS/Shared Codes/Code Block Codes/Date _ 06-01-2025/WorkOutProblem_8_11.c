#include<stdio.h>
#include<string.h>

int main(void)
{

int item = 5, maxchar= 20;
char str[item][maxchar], dummy[maxchar];
int i=0, j=0;

printf("Enter names of %d item\n", item);

while(i<item)
scanf("%s",str[i++]);

for(i=1; i<item; i++)
{
    for(j=1; j<=(item-i); j++)
    {
        if (strcmp(str[j-1],str[j])>0)
        {
            strcpy(dummy, str[j-1]);
            strcpy(str[j-1], str[j]);
            strcpy(str[j], dummy);
        }
    }
}

printf("\nAlphabet list\n\n");

for(i=0; i<item; i++)
{
    printf("%s\n", str[i] );
}
return 0;

}
