#include<stdio.h>

int main()
{
  int n, i;
  float sum=0;

  printf("Enter the length of the array : ");
  scanf("%d",&n);

  float A[n], average;

  for(i=0; i<n ;i++)
  {
      printf("Person %d's marks is = ", i+1);
      scanf("%f", &A[i]);

      sum = sum + A[i];
  }

  printf("\nThe average score is : %f", sum/n);

  return 0;

}
