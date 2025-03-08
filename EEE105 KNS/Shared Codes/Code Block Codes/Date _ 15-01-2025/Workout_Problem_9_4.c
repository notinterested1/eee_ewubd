#include<stdio.h>

void printline(char c);
double power(int, int);

int main(void)
{
    int x, y;

    printf("Enter x,y : ");
    scanf("%d  %d", &x, &y);
    printf("%d power to %d is : %lf ", x, y, power(x,y));
    return 0;
}

double power(int x, int y)
{
    double p;
    p=1.0;

    if (y>=0)
    {
        while(y--)
            p*=x;
    }

    else
    {
         while(y++)
            p/=x;
    }
    return(p);
}


