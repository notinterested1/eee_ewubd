#include<stdio.h>
#include<math.h>
int main()
{
      double R, L, C;

      printf("Enter the value of R : ");
      scanf("%lf", &R);
      printf("Enter the value of L : ");
      scanf("%lf", &L);
      printf("Enter the value of C : ");
      scanf("%lf", &C);
      printf("\n");

      printf("The magnitude response of this bandpass filter is maximum at : %lf Hz", 1/(2*3.1416*sqrt(L*C)));
      printf("\n");

      double freq_hi, freq_low;
      printf("Enter the lower limit of frequency : ");
      scanf("%lf", &freq_low);
      printf("Enter the higher limit of frequency : ");
      scanf("%lf", &freq_hi);

      double w, H_w, freq = freq_low;

      while(freq<=freq_hi)
      {
          w = freq*(2*3.1416);
          H_w = (w*L)/(sqrt((R*(1-w*w*L*C))*(R*(1-w*w*L*C))+w*w*L*L));
          printf("%lf     ", H_w);
          freq = freq + 1;
      }

      return 0;

}
