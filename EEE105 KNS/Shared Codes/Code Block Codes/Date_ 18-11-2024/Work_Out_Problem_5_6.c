#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{

char month[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int i;

printf("Enter the month value: ");
scanf("%d ", &i);

if (i<1||i>12)
    {
        printf("The entered integer must be between 1 to 12");
        getch();
        exit(0);
    }

if (i!=12)

    printf("%s is followed by %s", month[i-1], month[i]);

else

    printf("%s is followed by %s", month[i-1], month[0]);

getch();


}
