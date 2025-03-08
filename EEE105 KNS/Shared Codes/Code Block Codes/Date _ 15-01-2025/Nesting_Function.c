#include<stdio.h>
float ratio(int, int, int);
int diff(int, int);

int main(void)
{
    int x, y, z;
    scanf("%d  %d %d",&x, &y, &z);
    printf("%f\n", ratio(x, y, z));
    return 0;
}

float ratio(int x, int y, int z)
{
    if(diff(y, z))
        return (x/diff(y,z));
    else
        return(0.0);
}

int diff(int y, int z)
{
    return(y-z);
}
