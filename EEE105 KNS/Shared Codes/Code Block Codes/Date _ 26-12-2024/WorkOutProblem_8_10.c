#include<stdio.h>
#include<string.h>

int main(void)
{

char str[20], chk = 't';
int len, right, left;

printf("Enter a string\n");
scanf("%s",str);
len = strlen(str);
left = 0;
right = len - 1;

while(left<right && chk == 't')
{
    if(str[left]==str[right])
        ;
    else
        chk = 'f';

    left++;
    right--;
}

if(chk =='t')
    printf("\nThe string is a palindrome");
else
    printf("\nThe string is not a palindrome");
return 0;

}
