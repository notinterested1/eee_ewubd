#include<stdio.h>
#include<math.h>

int main()
{
    int first =480, second = 360;
    int i,j, stud_num, stud_roll, sub_num, marks, total;

    printf("Enter number of students and subjects\n");
    printf("Student Number: ");
    scanf("%d",&stud_num);
    printf("Subject Number: ");
    scanf("%d",&sub_num);

    for(i=1;i<=stud_num;i++)
    {
       printf("\nEnter roll number of the student : ");
       scanf("%d", &stud_roll);
       total = 0;
       printf("Enter marks of %d subjects of Roll no. %d\n", sub_num, stud_roll);

       for(j=1;j<=sub_num;j++)
       {
           printf("Subject %d : ", j);
           scanf ("%d", &marks);
           total = total + marks;
       }

       if (total>=480)
        printf("\nTotal marks : %d and you got first division\n", total);
       else if (total<480&&total>=360)
        printf("\nTotal marks : %d and you got second division\n", total);
       else
        printf ("\nTotal marks : %d and you have failed", total);
    }

    return 0;
}
