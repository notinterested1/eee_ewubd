#include<stdio.h>

int main()
{

  int i, j;
  int n;
  int k =1;

  printf("Enter the value of n : ");
  scanf("%d", &n);


  for(i=1;i<=n;i++)
  {

    for(j=1;j<=i;j++,k++)
    {
       printf("%4d", k);

    }

    printf("\n");

  }

}
