#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(void)
{

char word1[40], word2[40], word3[40], word4[40];
printf("Enter text: \n");
scanf("%s %s", word1, word2);
scanf("%s", word3);
scanf("%s", word4);

printf("\n%s, %s\n", word1, word2);
printf("%s %s\n", word3, word4);

char country[15] = "United kingdom";

printf("%s\n", country);
printf("%.3s\n", country);
printf("%15.0s\n", country);
printf("%15.6s\n", country);
printf("%15.12s\n", country);
printf("%-15.6s\n", country);


return 0;

}
