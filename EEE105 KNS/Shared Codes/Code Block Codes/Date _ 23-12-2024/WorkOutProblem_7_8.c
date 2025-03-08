#include<stdio.h>
#include<conio.h>

int main(void)
{

int a,b, i, j, k;
printf("Enter the size of the square matrix\n");
scanf("%d", &a);
b=a;

int a1[a][a], a2[a][a], c[a][a];

printf("You have to enter the the matrix elements in row-wise fasion\n");

for(i=0; i<a; i++)
{
    for(j=0; j<b; j++)
    {
       printf("a1[%d][%d] = ", i, j);
       scanf("%d", &a1[i][j]);
    }

}

for(i=0; i<a; i++)
{
    for(j=0; j<b; j++)
    {
       printf("a2[%d][%d] = ", i, j);
       scanf("%d", &a2[i][j]);
    }

}

printf("\nThe first matrix a1 is :\n");

for(i=0; i<a; i++)
{
    printf("\n");
    for(j=0; j<b; j++)
    {
       printf("%d\t", a1[i][j]);
    }

}

printf("\nThe second matrix a2 is :\n");
for(i=0; i<a; i++)
{
    printf("\n");
    for(j=0; j<b; j++)
    {
       printf("%d\t", a2[i][j]);
    }

}

printf("\nThe product of the two matrices is \n\n");

for(i=0; i<a; i++)

    for(j=0; j<b; j++)
    {
       c[i][j]=0;
       for(k=0;k<a;k++)
       c[i][j]=c[i][j]+a1[i][k]*a2[k][j];
    }

for(i=0;i<a;i++)
{
    printf("\n");
    for(j=0; j<b;j++)
    printf("%d\t", c[i][j]);
}

return 0;
}
