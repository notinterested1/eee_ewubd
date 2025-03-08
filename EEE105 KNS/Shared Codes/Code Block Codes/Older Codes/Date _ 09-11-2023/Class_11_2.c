#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the array size: ");
    scanf("%d",&n);

    int num[n];

    for(i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("The values are: ");
    for(i=0;i<n;i++)
        printf("%d ",num[i]);

    /*printf("%d ",num[0]);
    printf("%d ",num[1]);
    printf("%d ",num[2]);
    printf("%d ",num[3]);
    printf("%d ",num[4]);*/

    return 0;
}
