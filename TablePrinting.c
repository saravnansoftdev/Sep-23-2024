#include<stdio.h>
int main()
{
    int number,i=1;
    printf("enter a number: ");
    scanf("%d",&number);
    while(i<=10)
    {
        printf("%d X %d = %d\n",i,number,i*number);
        i++;
    }
    return;
}