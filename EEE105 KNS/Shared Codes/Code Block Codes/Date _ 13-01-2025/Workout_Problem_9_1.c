#include<stdio.h>

void printline(void);
void value(void);

int main(void)
{
    printline();
    value();
    printline();
    return 0;

}

void printline(void)
{
    int i;
    for(i=0; i<=30; i++)
    printf("_");
    printf("\n\n");
}

void value(void)
{
    int year, period;
    float inrate, sum, principal;

    printf("Principal amount?   ");
    scanf("%f", &principal);
    printf("Interest rate?       ");
    scanf("%f", &inrate);
    printf("Period?                ");
    scanf("%d", &period);
    sum=principal;
    year = 1;

    while(year <= period)
    {
        sum = sum*(1+inrate);
        year = year+1;
    }

    printf("\n%.2f   %.2f   %d   %.2f\n", principal, inrate, period, sum);
}
