#include<stdio.h>

int main()
{

    int maxstud = 10, counter = 11;
    int marks[maxstud], i, low, high;
    int group[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (i = 0; i<maxstud; i++)
    {
        scanf("%d", &marks[i]);
        group[(int)(marks[i]/10)] = ++group[(int)(marks[i]/10)];

    }


    printf("\n\n");
    printf("Group        Range        Frequency");
    printf("\n");

    for(i=0; i<counter; i++)
    {
        low = i*10;
        if(i==10)
            high = 100;
        else
            high = low +9;

        printf("  %2d       %3d to %3d           %d\n", i+1, low, high, group[i]);
    }

    return 0;

}
