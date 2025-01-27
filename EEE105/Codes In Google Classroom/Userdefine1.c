//A C Program to convert uppercase-to-lowercase and vice versa using User Defined Function:

#include <stdio.h>
char case_converter(char str);

int main() 
{
   char str[200];
   gets(str);

   int i;
   char val;

   for(i=0; str[i]!='\0'; i++)
   {
             val = case_converter(str[i]);
             printf("%c", val);
   }
   return 0;
}

char case_converter(char str)
{
        if(str>='A'&&str<='Z')
                 return(str+32);
         else if(str>='a'&&str<='z')
                 return(str-32);
         else
                 return(str);
}