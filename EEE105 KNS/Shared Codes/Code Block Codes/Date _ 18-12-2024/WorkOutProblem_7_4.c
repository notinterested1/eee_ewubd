#include<stdio.h>

int main(void)
{

int row =10, column=10;
int product[row][column];
int i, j, rows, columns;

printf("\n");
printf("            Multiplication Table\n\n");
printf("     ");

for(j=1; j<=column; j++)

  printf("%4d", j);
  printf("\n");
  printf("-------------------------------------------");
  printf("\n");

for(i=1; i<=row; i++)
{
    rows = i;
    printf("%2d | ", rows);

    for(j=1; j<=column; j++)
    {
        columns = j;
        product[i][j] = rows*columns;
        printf("%4d", product[i][j]);
    }
    printf("\n");
}




return 0;
}
