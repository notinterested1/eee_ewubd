#include<stdio.h>

int main()
{
    int sum,i;
    sum=0;
    i=1;

    while(i<=10)
    {
        sum=sum+i*i;
        i = i+1;
    }
    printf("The total is : %d", sum);

    return 0;
}
