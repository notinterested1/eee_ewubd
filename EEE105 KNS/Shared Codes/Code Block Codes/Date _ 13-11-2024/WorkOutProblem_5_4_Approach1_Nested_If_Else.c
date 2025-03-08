#include<stdio.h>

int main()
{

float a, b, c;


printf("Enter three float numbers : \n");
scanf("%f %f %f", &a, &b, &c);

if (a>b)
{
    if(a>c)
    printf("The largest number is : %f", a);
    else
    printf("The largest number is : %f", c);
}
else
{
    if(b>c)
    printf("The largest number is : %f", b);
    else
    printf("The largest number is : %f", c);
}

return 0;
}
