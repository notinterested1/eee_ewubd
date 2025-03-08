#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    switch(x)
    {
        case 3: printf("Mon");
                break;
        case 2: printf("Sun");
                break;
        case 7: printf("Fri");
                break;
        case 1: printf("Sat");
                break;
        case 4: printf("Tue");
                break;
        case 6: printf("Thu");
                break;
        case 5: printf("Wed");
                break;
        default: printf("Invalid Input");
    }
}
