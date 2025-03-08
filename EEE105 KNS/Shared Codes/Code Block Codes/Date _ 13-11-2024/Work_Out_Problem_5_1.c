#include<stdio.h>

int main()
{

int a, b, c, d;
float ratio;

printf("Enter four integers : \n");
printf("a = "); scanf("%d",&a);
printf("b = "); scanf("%d",&b);
printf("c = "); scanf("%d",&c);
printf("d = "); scanf("%d", &d);

if (c-d!=0)
{
    ratio = (float)(a-b)/(float)(c-d);
    printf ("The ratio is : %f", ratio);
}

return 0;
}
