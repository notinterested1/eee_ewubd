#include<stdio.h>

int main()
{
    int a = 5,b = 10;
    printf("Before: a = %d b = %d\n",a,b); //a = 5 b = 10
    b = a;
    printf("Step 1: a = %d b = %d\n",a,b); //a = 5 b = 5
    a--;
    printf("Step 2: a = %d b = %d\n",a,b); //a = 4 b = 5
    a = b++;
    printf("Step 3: a = %d b = %d\n",a,b); //a = 5 b = 6
    printf("Step 4: a = %d b = %d\n",++a,b--); //a = 6 b = 6
    printf("Step 5: a = %d b = %d\n",a,b); //a = 6 b = 5
    b = a--; // a = 6 b = 6
    printf("Step 6: a = %d b = %d\n",a,b); //a = 5 b = 6
    printf("Step 7: a = %d\n",a++); //a = 5
    //a=6
    printf("Step 8: b = %d\n",++b); //b = 7
    return 0;
}
