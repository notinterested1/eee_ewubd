#include<stdio.h>
#include<math.h>

int main()
{
    double fm, fc;
    printf("Enter the value of message frequency : ");
    scanf("%lf", &fm);
    printf("Enter the value of carrier frequency : ");
    scanf("%lf", &fc);

    int t;
    printf("Enter the number of time instances : ");
    scanf("%d", &t);

    if (fc<20*fm)
    {
        printf("Carrier frequency must be at least 20 times greater than message frequency ");
        return 0;
    }

    float DC;
    printf("Enter the DC value (DC Value must be equal to or greater than 5 to avoid over-modulation): ");
    scanf("%f", &DC);

    double mes[t], car[t],time[t], mod[t];
    double ti = 0;
    int i;

    printf("\nThe time array is : \n\n");

    for(i=0;i<t;i++)
    {
        time[i] = ti;
        printf("%lf   ", time[i]);
        ti = ti + 1/(float)(fm*(t-1));
    }

    printf("\n\nThe amplitudes of message signal are : \n\n");

    for(i=0;i<t;i++)
    {
        mes[i] = 5*cos(2*3.1416*fm*time[i]);
        printf("%lf   ", mes[i]);
    }

    printf("\n\nThe amplitudes of carrier signal are : \n\n");

    for(i=0;i<t;i++)
    {
        car[i] = 1*cos(2*3.1416*fc*time[i]);
        printf("%lf   ", car[i]);
    }

    printf("\n\nThe amplitudes of modulated signal are : \n\n");

    for(i=0;i<t;i++)
    {
        mod[i] = (DC + mes[i])*car[i];
        printf("%lf   ", mod[i]);
    }

    if (DC<5)
        printf("\n\nOver-modulation occurs due to a DC value smaller than 5\n\n");

    return 0;
}
