#include<stdio.h>
#include<conio.h>

int main(void)
{

int i,j;
int a[3][3], b[3][3];

printf("Enter a 3X3 matrix\n");

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
       printf("a[%d][%d] = ", i, j);
       scanf("%d", &a[i][j]);
    }

}

printf("\nThe entered matrix is:\n");

for(i=0; i<3; i++)
{
    printf("\n");
    for(j=0; j<3; j++)
    {
       printf("%d\t", a[i][j]);
    }

}

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
        b[i][j]=a[j][i];
}

printf("\n\nThe transpose of the matrix is : \n");

for(i=0; i<3; i++)
{
    printf("\n");
    for(j=0; j<3; j++)
    {
       printf("%d\t", b[i][j]);
    }

}
}
