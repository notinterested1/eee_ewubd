#include<stdio.h>

int fun1(void);
int fun2(void);
int fun3(void);
int fun4(int);
int x=1;

int main(void)
{
  int x = 20;
  printf("%d\n", x);
  printf("%d\n", fun1());
  printf("%d\n", fun2());
  printf("%d\n", fun3());
  printf("%d\n", fun4(x));
  return 0;
}


fun1(void)
{
  x=x+40;
  return(x);
}

int fun2(void)
{
  int x=4;
  x = x+11;
  return(x);
}

fun3(void)
{
  x=x+10;
  return(x);
}

fun4(int y)
{
  y=y+x;
  return(y);
}
