#include<stdio.h>

int main()
{
    int a, b;
    b=100;
    printf("Enter an integer number : ");
    scanf("%d",&a);

    if (a < b)
       printf("Your number is less than 100\n\n");
    else
       printf("Your number contains more than 2 digits\n");

    return 0;
}
