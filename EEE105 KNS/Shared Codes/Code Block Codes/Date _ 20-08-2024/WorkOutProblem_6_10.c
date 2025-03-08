#include<stdio.h>
#include<math.h>

int main()
{
    int count, negative;
    double number, sqroot;
    count = 0;
    negative = 0;

    while (count<=100)
    {
       printf("Enter a number: ");
       scanf("%lf", &number);
       if(number==9999)
        break;
       if(number<0)
       {
           printf("The entered number is negative\n\n");
           negative++;
           continue;
       }
       sqroot = sqrt(number);
       printf("The squareroot of the number %lf is %lf\n\n", number, sqroot);
       count++;
    }

    printf("The number of items done : %d/n", count);
    printf("The number of negative items : %d/n", negative);
    return 0;
}
