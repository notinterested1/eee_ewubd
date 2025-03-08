#include<stdio.h>
int vowel_counter(char []);
int const_counter(char []);

int main(void)
{
  char str[1000];
  int z1, z2;
  printf("Enter a line: ");
  gets(str);
  z1 = vowel_counter(str);
  z2 = const_counter(str);

  printf("\n");

    printf("Total number of vowel is : %d\n", z1);
    printf("Total number of consonant is : %d\n", z2);


  return 0;
}

int vowel_counter(char str[])
{
  int n=0, i;

  for(i=0;str[i]!='\0';i++)

      if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')

         n++;

  return (n);
}



int const_counter(char str[])
{
  int n=0, i;

  for(i=0;str[i]!='\0';i++)

    if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))

      if(str[i]!='a'&&str[i]!='A'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&&str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U')

         n++;

  return (n);
}

