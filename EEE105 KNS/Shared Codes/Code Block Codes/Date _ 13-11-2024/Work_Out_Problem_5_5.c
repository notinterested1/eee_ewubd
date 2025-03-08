#include<stdio.h>

int main()
{

float charge;
int custnum, units;

printf("Enter CUSTOMER NO and UNITS consumed\n");
scanf("%d%d", &custnum,&units);

if (units<=200)
    charge=0.5*units;

else if (units<=400)
    charge=100+0.65*(units-200);

else if (units<=600)
    charge=230+0.8*(units-400);

else
   charge=390+(units-600);

printf("\nCUSTOMER NO: %d  Charge: %0.2f", custnum, charge);

return 0;
}
