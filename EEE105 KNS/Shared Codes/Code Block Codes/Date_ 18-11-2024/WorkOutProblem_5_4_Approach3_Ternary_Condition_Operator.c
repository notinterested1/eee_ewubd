#include<stdio.h>

int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);

    max = (a>b && a>c)?(a):((b>c)?(b):(c));

    printf("Max = %d",(a>b && a>c)?(a):((b>c)?(b):(c)));

    return 0;
}
