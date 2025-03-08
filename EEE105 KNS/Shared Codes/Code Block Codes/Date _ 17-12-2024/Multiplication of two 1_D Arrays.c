#include<stdio.h>

int main()
{
  int n, i;

  printf("Enter the length of arrays : ");
  scanf("%d",&n);

  int A[n], B[n], result[n];

  for(i=0; i<n ;i++)
  {
      printf("A[%d] = ", i);
      scanf("%d", &A[i]);
      printf("B[%d] = ", i);
      scanf("%d", &B[i]);

      result[i] = A[i]*B[i];

  }

  printf("\nThe resultant array is : ");

  for(i=0; i<n ;i++)

      printf("%d\t", result[i]);

  return 0;

}
