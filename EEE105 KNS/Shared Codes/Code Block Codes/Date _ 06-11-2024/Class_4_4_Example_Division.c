#include<stdio.h>

int main()
{
    int a1, d1, b1, c, d3, d4;
    float a2, d2, d5, c1, d6, d7;
    a1 = 13;  c = 5; b1 = 3;
    a2 = 13;  c1=5;

    d1 = a1/b1;
    d3 = a1%c;
    d2 = a2/b1;
    d4 = a2/c;
    d5 = a1/c1;
    d6 = a2/c;
//  d7 = a2%c1;

    printf("%d\n%d\n",d1, d3);
    printf("%f\n%d\n%f\n%f\n%f", d2, d4, d5, d6, d7);
    return 0;
}
