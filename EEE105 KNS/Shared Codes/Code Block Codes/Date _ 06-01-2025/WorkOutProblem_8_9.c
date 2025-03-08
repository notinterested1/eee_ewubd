#include<stdio.h>
#include<string.h>

int main(void)
{

char str1[20], str2[20], str3[20];
char str4[20];
int x, l1, l2, l3;

printf("\nEnter first string\n");
scanf("%s",str1);
printf("\nEnter second string\n");
scanf("%s",str2);

strcpy(str4, str1);
strcat(str4, " ");

x = strcmp(str1, str2);

if(x!=0)
{
    printf("\nTwo strings are not equal\n");
    strcat(str4, str2);
    strcpy(str3, str4);
    strcpy(str1, str4);
}

else
{
    printf("\nTwo strings are equal\n");
    strcpy(str3, str1);
}



l1 = strlen(str1);
l2 = strlen(str2);
l3 = strlen(str3);

printf("\nFirst String = %s\t length = %d characters\n", str1, l1 );
printf("\nSecond String = %s\t length = %d characters\n", str2, l2 );
printf("\nThird String = %s\t length = %d characters\n", str3, l3 );
return 0;

}
