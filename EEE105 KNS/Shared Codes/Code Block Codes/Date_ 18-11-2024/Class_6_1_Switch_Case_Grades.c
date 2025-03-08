#include<stdio.h>

int main()
{

int marks;
int index;

printf("Enter the marks of a student: ");
scanf("%d", &marks);
index = marks/10;

switch(index)
{
    case 10:
        printf("Excellent! You got A");
        break;

    case 9:
        printf("Excellent! You got A");
        break;

    case 8:
        printf("Good! You got B");
        break;

    case 7:
        printf("Good! You got C");
        break;

    case 6:
        printf("You got D");
        break;

    default:
        printf("Poor..You got F");
        break;

}

return 0;
}
