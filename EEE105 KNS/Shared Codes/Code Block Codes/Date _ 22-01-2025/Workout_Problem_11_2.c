#include<stdio.h>

int main(void)
{
  int x, y;
  int *ptr;
  x = 10;
  ptr=&x;
  y = *ptr;

  printf("The value of x is : %d \n\n", x);
  printf("%d is stored at the address %u.\n\n", x, &x);
  printf("%d is stored at the address %u.\n\n", *&x, &x);
  printf("%d is stored at the address %u.\n\n", *ptr, ptr);
  printf("%d is stored at the address %u.\n\n", ptr, &ptr);
  printf("%d is stored at the address %u.\n\n", y, &y);

  *ptr = 25;

  printf("%d is stored at the address %u.\n\n", *ptr, ptr);

  return 0;
}

