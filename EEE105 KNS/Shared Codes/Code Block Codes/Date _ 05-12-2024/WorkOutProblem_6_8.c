#include<stdio.h>
#include<math.h>

int main()
{
    int m;
    float x, sum, average;
    sum=0;

    printf("This program computes the average of a set of positive real numbers\n");
    printf("Enter values one after another\n");
    printf("Enter a negative number to end the set\n");

    for(m=1;m<=1000;m++)
    {
       scanf("%f", &x);

       if(x<0) break;

       sum = sum + x;
    }

    average = sum/(m-1);
    printf("\n");
    printf("Number of Values = %d\n", m-1);
    printf("Sum              = %f\n", sum);
    printf("Average          = %f\n", average);
    return 0;
}
