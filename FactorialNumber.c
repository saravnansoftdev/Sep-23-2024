#include<stdio.h>
int main()
{
    int fac,result=1;
    printf("enter a number: ");
    scanf("%d",&fac);
    while(fac>0)
    {
        result *= fac;
        fac--;
    }
    printf("factorial number =  %d",result);
    return;
}