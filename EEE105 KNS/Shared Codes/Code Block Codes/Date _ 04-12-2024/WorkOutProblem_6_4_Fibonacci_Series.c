#include<stdio.h>
#include<conio.h>


int main()
{
    int num1, num2, n, i, fib;
    num1=0,
    num2=1,

    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("0\t1\t");

    for(i=1; i<=n-2; i++)
    {
        fib = num1 +num2;
        num1 = num2;
        num2 = fib;
        printf ("%d\t", fib);

    }

    printf("\nThe nth interger of Fibonacci series is: %d", fib);
    return 0;
}
