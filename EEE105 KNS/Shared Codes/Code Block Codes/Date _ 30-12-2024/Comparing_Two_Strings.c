#include<stdio.h>
int main(void)
{
char str1[10];
char str2[10];
printf("Enter the first string : ");
scanf("%s",str1);
printf("Enter the second string : ");
scanf("%s",str2);

int j =0, k =0;
for(j = 0; str1[j] != '\0'; j++)
{
}

for(k = 0; str2[k] != '\0'; k++)
{
}

int flag1=0, i=0;
while(str1[i]!='\0' && str2[i]!='\0') {
if(str1[i]!=str2[i])
{
flag1=1;
break;
}
i++;
}
if(flag1==0 && j==k)
printf("The entered two strings are equal");
else
printf("The entered two strings are not equal");
return 0;
}
