#include<stdio.h>
int main()
{
    int n,res=0,rev=0;
    printf("enter the number: ");
    scanf("%d",&n);
    int temp = n*n;
    printf("%d\n",temp);
    while(n>0)
    {
        res = res * 10 + (n%10);
        n /=10;
    }
    res = res * res;
    while(res!=0)
    {
        rev = rev * 10 + res%10;
        res /=10;
    }
    printf("res = %d\n",res);
    if(temp==rev)
    {
        printf("%d is Adam number\n",temp);
    }
    else
    {
        printf("%d is not a Adam number\n",temp);
    }
    return;
}