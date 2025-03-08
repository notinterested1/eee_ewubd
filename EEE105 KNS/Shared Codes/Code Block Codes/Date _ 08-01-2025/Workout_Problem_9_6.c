#include<stdio.h>
#include<math.h>

float std_dev(float a[], int n);
float mean(float a[], int n);

int main(void)
{
    int size;
    printf("Enter the length of the array: %d\n", size);
    scanf("%d", &size);

    float value[size];
    int i;

    printf("Enter %d float values\n", size);

   for(i=0; i<size; i++)
       scanf("%f", &value[i]);

   printf("\n");
   printf("Standard Deviation is %f\n", std_dev(value, size));

    return 0;
}

float std_dev(float a[], int n)
{
    int i;
    float x, sum=0.0;

    x = mean(a,n);

    for(i=0; i<n; i++)
       sum = sum + (x-a[i])*(x-a[i]);

    return(sqrt(sum/(float)n));
}

float mean(float a[], int n)
{
    int i;
    float sum=0.0;

    for(i=0; i<n; i++)
       sum = sum + a[i];

    return(sum/(float)n);
}

