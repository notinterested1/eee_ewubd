#include<stdio.h>
#include<conio.h>


int main()
{
    int n, count;
    float x, term, sum, accuracy;
    accuracy = 0.0001;

    printf("Enter the value of x:\n");
    scanf("%f", &x);

    sum = count = n = term = 1;

    for(n=1; n<=100; n++)
    {
        term = term*x/n;
        sum = sum+term;
        count = count + 1;

        if (term<accuracy)
            n = 999;


    }

    printf("Terms : %d  Sum :   %f", count , sum );
    return 0;
}
