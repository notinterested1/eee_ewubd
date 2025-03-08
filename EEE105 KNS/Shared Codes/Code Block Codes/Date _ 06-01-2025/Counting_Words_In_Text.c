#include<stdio.h>
#include<string.h>

int main(void)
{

int i, c;
int end=0, characters = 0, words = 0, lines = 0;
char line[81], ctr;

printf("Key in the text.\n");
printf("Give the space after each word.\n");
printf("When completed, press 'Return'.\n\n");

while(end==0)
 {
     c = 0;
     while((ctr=getchar())!='\n')
        line[c++] = ctr;
     line[c] = '\0';

     if(line[0] == '\0')
         break;
       else
       {
           words++;
           for(i=0; line[i]!='\0'; i++)
            if(line[i]==' '||line[i]=='\t')
               words++;
       }
       lines = lines + 1;
       characters = characters + strlen(line);
 }

 printf("\n");
 printf("Number of Lines = %d\n", lines);
 printf("Number of words = %d\n", words);
printf("Number of characters = %d\n", characters);

return 0;

}
