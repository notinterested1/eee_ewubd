#include<stdio.h>

int main()
{
    int sum=0, i=1;
    int N, p, j;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    while(i<=N)
    {
        p = 1;
        j = 1;

        while(j<=i)
        {
            p = p*i;
            j=j+1;
        }

        sum = sum+p;
        i = i+1;
    }

    printf("The summation is : %d", sum);


return 0;


}
