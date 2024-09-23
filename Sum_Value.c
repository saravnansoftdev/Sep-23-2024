#include<stdio.h>
int main()
{
    int data,sum=0;
    printf("enter the number: ");
    scanf("%d",&data);
    while(data>=1)
    {
        sum += data;
        data--;
    }
    printf("Sum of the value = %d",sum);
    return;
}