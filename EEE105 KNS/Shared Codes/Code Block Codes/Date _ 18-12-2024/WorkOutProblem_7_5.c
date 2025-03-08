#include<stdio.h>

int main(void)
{

int salesman = 2, items = 2;
int value[salesman][items];
int man_total[salesman], item_total[items];
int i, j, grand_total=0;

printf("Input Data\n");
printf("Enter values, one at a time, row wise\n\n");

for(i=0; i<salesman; i++)
{
    man_total[i] = 0;
    for(j=0; j<items; j++)
    {
       scanf("%d", &value[i][j]);
       man_total[i] = man_total[i] + value[i][j];
    }

}

printf("\nSalesman Total\n");

for(i=0; i<salesman; i++)
    printf("salesman[%d] = %d\n", i, man_total[i]);

for(j=0; j<items; j++)
{
   item_total[j] = 0;

   for(i=0; i<salesman; i++)
   {
       item_total[j] = item_total[j]+ value[i][j];

   }
}

printf("\nItems Total\n");

for(j=0; j<items; j++)
    printf("item[%d] = %d\n", j, item_total[j]);

for(i=0; i<salesman; i++)
    grand_total = man_total[i] + grand_total;

return 0;
}
