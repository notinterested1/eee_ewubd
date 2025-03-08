#include<stdio.h>

int main()
{
    int num_stud, num_sub, stud_id, marks;
    int i, j, sum;

    printf("Enter the total number of stduents : ");
    scanf("%d",&num_stud);
    printf("Enter the total number of subjects : ");
    scanf("%d",&num_sub);

    for(i=1;i<=num_stud;i++)
    {
        sum=0;
        printf("Enter the student ID : ");
        scanf("%d",&stud_id);

        for(j=1;j<=num_sub;j++)
        {
            printf("Enter the marks of sub[%d] : ", j);
            scanf("%d",&marks);

            sum = sum + marks;
        }

        printf("Total marks of student ID %d is : %d\n", stud_id, sum);


    }


    return 0;
}
