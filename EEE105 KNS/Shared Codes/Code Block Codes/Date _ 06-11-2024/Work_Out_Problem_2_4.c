#include<stdio.h>

int main()
{
 // Declaration
    float x, p;
    double y, q;
    unsigned k;

// Declaration and assignment
   signed int m = 54321;
   long int n = 1234567890;

// Assignment
   x = 1.23456789000;
   y = 9.87654321;
   k = 54321;
   p = q = 1.0;

// Printing
   printf("m = %d\n", m);
   printf("n = %ld\n", n);
   printf("x = %0.12f\n",x);
   printf("x = %f\n",x);
   printf("y = %0.12lf\n",y);
   printf("y = %lf\n",y);
   printf("k = %u p = %f q = %.12f\n",k, p, q);

    return 0;
}
