#include<stdio.h>
#include<math.h>

int main()
{
    double x, y;
    int count;
    count =1;

    printf("Enter five real values one by one\n");
    read:
    scanf("%lf",&x);

    if(x<0)
        printf("Number - %d is negative\n\n",count);
    else
      {
         y = sqrt(x);
         printf("The root of number - %d is %lf\n\n",count, y);
      }
    count = count+1;

    if (count<=5)
        goto read;

    printf("\n End of program");

    return 0;
}
