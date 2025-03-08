#include<stdio.h>
int main(void)
{

   int r, c;

   printf("Enter the value of row number : ");
   scanf("%d", &r);

   printf("Enter the value of column number : ");
   scanf("%d", &c);

   int A[r][c], B[c][r];
   int i, j;

   printf("\n");

   for(i=0; i<r; i++)
   {

       for(j=0; j<c; j++)
       {

            printf("Enter the value A[%d][%d]:", i, j);
            scanf("%d", &A[i][j]);

       }
   }

   printf("\nEntered Matrix A is : ");

   for(i=0; i<r; i++)
   {
       printf("\n");
       for(j=0; j<c; j++)
            printf("%d\t", A[i][j]);

   }

   printf("\n");

   for(i=0; i<c; i++)
   {

       for(j=0; j<r; j++)
       {

            B[i][j] = A[j][i];

       }
   }

   printf("\nTranspose Matrix B is : ");

   for(i=0; i<c; i++)
   {
       printf("\n");
       for(j=0; j<r; j++)
            printf("%d\t", B[i][j]);

   }



   return 0;
}
