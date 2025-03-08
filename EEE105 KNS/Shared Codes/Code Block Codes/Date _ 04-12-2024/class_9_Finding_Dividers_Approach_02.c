#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter an integer number : ");
    scanf("%d",&n);
    int count =0;
    printf("\n");

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            {
                printf("%d ",i);
                count++;
            }
    }

    printf("\n\nTotal number of divider is %d\n", count);

    return 0;
}
