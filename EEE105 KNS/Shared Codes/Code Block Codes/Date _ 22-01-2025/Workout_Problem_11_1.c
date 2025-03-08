#include<stdio.h>

int main(void)
{
  char a;
  int x;
  float p, q;

  a = 'A';
  x = 2;;
  p = 4.5, q=7.4;

  printf("%c is stored at the address %u.\n", a, &a);
  printf("%d is stored at the address %u.\n", x, &x);
  printf("%f is stored at the address %u.\n", p, &p);
  printf("%f is stored at the address %u.\n", q, &q);
  return 0;
}

