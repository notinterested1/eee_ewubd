#include<stdio.h>
#include<conio.h>

void sort(int m, int x[]);

int main(void)
{
    int x[5] = {10, 6, 9, 80, 1};
    int i;

    printf("Marks before sorting\n");

   for(i=0; i<5; i++)
   {
       printf("%4d", x[i]);
   }

   printf("\n\n");

   sort(5, x);
   printf("Marks after sorting\n");

    for(i=0; i<5; i++)
   {
       printf("%4d", x[i]);
   }

    return 0;
}

void sort(int m, int y[])
{
    int i, j, t;

     for(i=1; i<=m; i++)
    {
       for(j=1; j<=m-i; j++)
       {
           if(y[j-1]>=y[j])
           {
               t = y[j-1];
               y[j-1] = y[j];
               y[j] = t;
           }
       }

    }

}


