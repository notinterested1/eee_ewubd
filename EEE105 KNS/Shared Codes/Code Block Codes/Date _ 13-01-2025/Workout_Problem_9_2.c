#include<stdio.h>

void printline(char c);
void value(float, float, int);

int main(void)
{
    float principal, inrate;
    int period;
    char ch;

    printf("Enter z/c?     ");
    scanf("%c", &ch);
    printf("Principal amount?   ");
    scanf("%f", &principal);
    printf("Interest rate?       ");
    scanf("%f", &inrate);
    printf("Period?                ");
    scanf("%d", &period);

    printline(ch);
    value(principal, inrate, period);
    printline(ch);

    return 0;

}

void printline(char ch)
{
    int i;

    if (ch == 'z')
    {
        for(i=0; i<=50; i++)
        printf("_");
        printf("\n");
    }

    else
    {
        for(i=0; i<=50; i++)
        printf("*");
        printf("\n");
    }

}

void value(float principal, float inrate, int period)
{
    int year;
    float sum;

    sum=principal;
    year = 1;

    while(year <= period)
    {
        sum = sum*(1+inrate);
        year = year+1;
    }

    printf("%.2f   %.2f   %d   %.2f\n", principal, inrate, period, sum);
}
