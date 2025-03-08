#include<stdio.h>
#include<math.h>

int main()
{
    int row, column, y;
    int rowmax, columnmax;
    row =1;

    printf("Enter the value of rowmax  ");
    scanf("%d",&rowmax);
    printf("Enter the value of columnmax  ");
    scanf("%d",&columnmax);
    printf("\n\n");

    printf ("         MULTIPLICATION TABLE      \n\n");

    do
    {
        column = 1;
        do
        {
             y = row*column;
             printf("%4d",y);
             column = column +1;
        }
        while (column<=columnmax);
            printf("\n");
            row = row+1;

    }

    while(row<=rowmax);
    printf("----------------------------------------");

    return 0;
}
