#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("enter a number: ");
    scanf("%d",&n);
    //temp = n;
    while(n>0)
    {
        temp = temp * 10 + (n%10);
        n = n/10;
    }
    printf("Reverse = %d",temp);
    return;
}