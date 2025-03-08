#include<stdio.h>

int main()
{

int marks;

printf("Enter the marks of a student: ");
scanf("%d", &marks);

if (marks>=90)
    printf("Excellent! You got A");

else if (marks<90&&marks>=80)
    printf("Good! You got B");

else if (marks<80&&marks>=70)
    printf("Good! You got C");

else if (marks<70&&marks>=60)
    printf("You got D");

else
    printf("Poor..You got F");

return 0;
}
