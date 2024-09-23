#include<stdio.h>
int main()
{
    int num,digits=0,res=1;
    printf("enter a number: ");
    scanf("%d",&num);
    int temp = num;
    while(temp>0)
    {
        temp /= 10;
        digits++;
    }
    temp = 0;
    printf("Digits=%d\n",digits);
    while(num>0)
    {
        temp = num%10;
        int cache = digits;
        while(digits>0)
        {
            res = res * temp;
            digits--;
        }
        digits = cache;
        num /=10;
    }
    printf("res = %d\n",res);
    return;
}