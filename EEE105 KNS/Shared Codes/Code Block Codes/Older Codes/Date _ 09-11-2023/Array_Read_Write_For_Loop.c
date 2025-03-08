#include<stdio.h>

int main()
{
    char name[4];
    int number[4],i;
    float sample[4];

    //char name2[10] = "Well Done";

    for(i=0;i<4;i++)
    {
        printf("Enter value number[%d]: ",i);
        scanf("%d",&number[i]);
        printf("Enter value sample[%d]: ",i);
        scanf("%f",&sample[i]);
        printf("Enter value name[%d]: ",i);
        scanf(" %c",&name[i]);
    }

    printf("\n\n");

    for(i=0;i<4;i++)

        printf(" %d ", number[i]);

    printf("\n\n");

    for(i=0;i<4;i++)

        printf(" %f ", sample[i]);

    printf("\n\n");

    for(i=0;i<4;i++)

        printf(" %c ", name[i]);

    printf("\n\n");
    return 0;

}
