#include<stdio.h>

int main()
{
    int set_len, min, i, j, temp;

    printf("Enter the length of the number set :");
    scanf("%d", &set_len);
    int set1[set_len];

    for(i=0; i<set_len; i++)
    {
       scanf("%d", &set1[i]);
    }

    min = set1[1];

    for(j=0; j<set_len-1; j++)
    {
        for(i=0; i<set_len-1; i++)
        {
            if (set1[i]>set1[i+1])
                {
                    temp = set1[i];
                    set1[i] = set1[i+1];
                    set1[i+1] = temp;
                }
         }

    }

    for(i=0; i<set_len; i++)
    {
       printf("%d  ", set1[i]);
    }

    return 0;
}
