#include<stdio.h>

int main()
{
    int i,j,space,length;
    printf("enter the length: ");
    scanf("%d",&length);
    for(i=1; i<=length; i++)
    {
        for(space=1; space<=length-i; space++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}