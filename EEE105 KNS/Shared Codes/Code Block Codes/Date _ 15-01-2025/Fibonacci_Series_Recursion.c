#include <stdio.h>

int fibonacci(int n); // Corrected function declaration

int main(void)
{
    int n;
    printf("Enter a term of number from Fibonacci series: ");
    scanf("%d", &n);

    // Input validation
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    printf("%d term of Fibonacci series is %d\n", n, fibonacci(n - 1));
    return 0; // Return success
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}