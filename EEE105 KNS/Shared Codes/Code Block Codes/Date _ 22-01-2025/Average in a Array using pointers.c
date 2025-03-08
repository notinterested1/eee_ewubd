#include<stdio.h>

int main(void)
{

    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int x[n], *p, i;
    p= &x;

    float sum=0;

    for(i=0;i<n;i++)
    {
         printf("x[%d] : ", i+1);
         scanf("%d", p+i);
         sum = sum + *(p+i);

    }

    printf("\n");
    for(i=0;i<n;i++)
    printf("%d  ", *(p+i));

    printf("\n\naverage : %f", sum/n);
    return 0;
}
