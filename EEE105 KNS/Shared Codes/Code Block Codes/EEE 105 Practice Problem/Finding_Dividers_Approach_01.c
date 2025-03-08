#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    int count =0;
    printf("\n");

    while(i<=n)
    {
        if(n%i==0)
            {
                printf("%d ",i);
                count++;
            }

        i++;
    }

    printf("\n\nTotal number of divider is %d\n", count);

    return 0;
}
