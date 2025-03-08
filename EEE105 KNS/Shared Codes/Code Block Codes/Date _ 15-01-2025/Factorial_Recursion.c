#include<stdio.h>
int factorial(int n);

int main(void)
{
    int n;
    printf("Enter an interger number for factorial : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n", n, factorial(n));
}


int factorial(int n)
{
    int fact;
    if (n==1)
        return 1;
    else
        fact=n*factorial(n-1);
    return(fact);
}
