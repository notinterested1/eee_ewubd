#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);

    if(a!=b)
    {
        if(a>b)
            printf("Max = %d",a);
        else
            printf("Max = %d",b);
    }
    else
        printf("The numbers are equal");

    return 0;
}
