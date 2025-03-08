#include<stdio.h>
int prime_finder(int);

int main(void)
{
  int n;
  int z;
  printf("Enter an integer number : ");
  scanf("%d", &n);
  z = prime_finder(n);

  printf("\n");

  if(z==0)

    printf("%d is a prime number\n", n);

  else

    printf("%d is a non-prime number\n", n);

  return 0;
}

int prime_finder(int n)
{
  int i, flag=0;

  for(i=2;i<n/2;i++)
  {
      if(n%i==0)
      {
         flag = 1;
         return (flag);
      }
  }

  return (flag);
}
