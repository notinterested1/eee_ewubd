#include<stdio.h>

void printline(void)

int main(void)
{
    printline();
    print("This illustrates the use of C function\n");
    printline();

    return 0;

}

void printline(void)
{
    int i;
    for(i=0; i<=40; i++)
    printf("_");
    printf("\n");
}
