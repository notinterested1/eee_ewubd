#include<stdio.h>
#include<math.h>

int main()
{
    int fm, n, t, i, j;

    printf("Enter the frequency : ");
    scanf("%d", &fm);
    printf("Enter the highest power of the series : ");
    scanf("%d", &n);
    printf("Enter the time instance number : ");
    scanf("%d", &t);

    double dt = (float)1/(fm*t);
    double time = 0;
    double term, x, sum;

    printf("\nThe Sine values are : \n\n");

    for(i=0;i<t;i++)
    {
        x = 2*3.1416*fm*time;
        term = x;
        sum = x;

        for(j=3;j<=n; j=j+2)
        {
            term = -term*x*x/(j*(j-1));
            sum = sum + term;
        }

        printf("%lf    ", sum);
        time = time + dt;
    }

    return 0;
}
