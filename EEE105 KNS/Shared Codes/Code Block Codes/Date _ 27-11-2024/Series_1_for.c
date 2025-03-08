
// sum = 1^1 + 2^2 + 3^3 + 4^4 + ....... +n^n

#include<stdio.h>

int main()
{

  int i, j ,n;
  long term, sum=0;

  printf("Enter the value of n : ");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
  {
    term =1;

    for(j=1;j<=i;j++)
    {
       term = term*i;
    }

    sum = sum +term;

  }

  printf("The sum is : %ld", sum);
}
