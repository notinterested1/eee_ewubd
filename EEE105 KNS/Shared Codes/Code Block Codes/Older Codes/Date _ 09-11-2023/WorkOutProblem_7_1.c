#include<stdio.h>

int main()
{

    int i;
    float x[10], value, total;

    for (i = 0; i<10; i++)
    {
        scanf("%f", &value);
        x[i] = value;

    }

    total = 0;
    printf("\n\n");

    for(i=0; i<10; i++)
    total = total + x[i]*x[i];

    for (i=0; i<10; i++)
        printf("x[%d] = %0.5f\n", i+1, x[i]);

    printf("Total is : %0.5f", total);

    return 0;

}
