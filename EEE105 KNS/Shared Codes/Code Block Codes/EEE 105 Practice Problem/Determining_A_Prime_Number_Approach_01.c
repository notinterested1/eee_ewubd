#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    int flag=0;

    for(i=2;i<(n-1);i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==0)
        printf("%d is a Prime number", n);
    else
        printf("%d is a Non-prime number", n);


    return 0;
}
