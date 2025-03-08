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

    for(row=1;row<=rowmax;row++)
    {
       for(column=1;column<=columnmax;column++)
       {
           y = row*column;
           printf("%4d",y);
       }

       printf("\n");
    }

    printf("----------------------------------------");

    return 0;
}
