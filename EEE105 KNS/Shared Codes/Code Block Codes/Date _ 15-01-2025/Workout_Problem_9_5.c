#include<stdio.h>
#include<conio.h>

float minpos(float [], int);

int main(void)
{
    float x[10] = {3.79, 6.7, 9.8, 5,6, 1.23, 4.5, 7.66, 4.35, 0.98, 2.44};
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n); printf("\n");


    if(n>=1 && n<=10)
        ;
    else
    {
        printf("Invalid value of n, Please press any key to terminate the program");
        getch();
        exit(0);
    }

        printf("Within the first %d elements of array, the lowest value is : %f\n", n, minpos(x, n));

    return 0;
}

float minpos(float x[], int n)
{
    int i;
    float min= x[0] ;
     for(i=0; i<n; i++)
    {
       if (x[i]<min)
           min = x[i];
    }

    return(min);
}


