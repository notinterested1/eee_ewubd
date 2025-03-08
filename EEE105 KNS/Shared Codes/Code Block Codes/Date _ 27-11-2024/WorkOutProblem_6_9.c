#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int m;
    float x, term, sum;
    float accuracy = 0.0001;
    sum=0;
    //printf("%f\n",fabs(-5.1234));
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("\n");
    sum = 0;
    term=1;

    for(m=1;m<=100;m++)
    {
       sum = sum + term;
       if (fabs(term)<=accuracy)
        goto output;
       term = term*x;
    }

    printf("   The final value of n is not enough\n");
    printf("    to achieve the desired accuracy\n");
    goto end;
    output:
       printf("No. of terms: %d  Sum: %f", m, sum);
    end:
    return 0;
}
