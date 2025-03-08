#include<stdio.h>

int main()
{
    int sum,i;
    sum=0;
    i=1;

    do
    {
        sum=sum+i;
        i = i+2;
    }
    while (sum<40||i<10);

    printf("sum= %d i = %d", sum, i);

    return 0;
}
