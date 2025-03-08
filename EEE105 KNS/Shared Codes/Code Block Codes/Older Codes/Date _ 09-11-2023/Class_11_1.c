#include<stdio.h>

int main()
{
    char name[4];
    int number[4],i;
    float sample[4];

    char name2[10] = "Well Done";

    for(i=0;i<4;i++)
    {
        printf("Enter value number[%d]: ",i+1);
        scanf("%d",&number[i]);
        printf("Enter value sample[%d]: ",i+1);
        scanf("%f",&sample[i]);
        printf("Enter value name[%d]: ",i+1);
        scanf(" %c",&name[i]);
    }

        printf(" %d ", number[0]);
        printf(" %d ", number[1]);
        printf(" %d\n",number[2]);
        printf(" %f ", sample[0]);
        printf(" %f ", sample[1]);
        printf(" %f\n",sample[2]);
        printf(" %c ", name[0]);
        printf(" %c ", name[1]);
        printf(" %c\n ", name[2]);
        printf("%s", name2);

    return 0;

}
