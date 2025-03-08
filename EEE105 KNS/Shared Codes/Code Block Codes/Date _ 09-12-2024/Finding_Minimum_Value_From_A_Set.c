#include<stdio.h>

int main()
{
    int set_len, min, i;
    int index;

    printf("Enter the length of the number set : ");
    scanf("%d", &set_len);
    int set[set_len];

    for(i=0; i<set_len; i++)
    {
       printf("Enter value %d: ",i+1);
       scanf("%d", &set[i]);
    }

    min = set[1];

    for(i=0; i<set_len; i++)
    {
       if (set[i]<min)
           {
              min = set[i];
              index = i+1;
           }

    }

    printf("\nThe smallest number is %d at the position %d", min, index);

    return 0;
}


