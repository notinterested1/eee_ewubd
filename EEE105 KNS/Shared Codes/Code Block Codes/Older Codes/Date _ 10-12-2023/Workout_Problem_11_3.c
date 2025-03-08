#include<stdio.h>

int main(void)
{
  int a, b, *p1, *p2, x, y, z;
  a = 12;
  b = 4;
  p1 = &a;
  p2 = &b;

  printf("Address of a : %u.\n", p1);
  printf("Address of b : %u.\n\n", p2);

  x = *p1**p2-6;
  y = 4*-*p2/ *p1 +10;

  printf("a = %d,  b = %d\n\n", a, b);
  printf("x = %d,  y = %d\n\n", x, y);

  *p2 = *p2 + 3;
  *p1 = *p2 - 5;
  z = *p1**p2-6;

  printf("a = %d,  b = %d\n\n", a, b);
  printf("z = %d\n\n", z);


  return 0;
}

