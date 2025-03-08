#include<stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;


    //scanf("%d %f %lf %c",&a,&b,&c,&d);
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%lf",&c);
    printf("Enter the value of d: ");
    scanf(" %c",&d);

    printf("Value of a: %d\n",a);
    printf("Value of b: %0.2f\n",b);
    printf("Value of c: %0.3lf\n",c);
    printf("Value of d: %c\n",d);

    return 0;
}
