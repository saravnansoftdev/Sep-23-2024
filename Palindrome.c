#include<stdio.h>

int main()
{
    int Num,result=0;
    printf("enter a number: ");
    scanf("%d",&Num);
    int temp = Num;
    while(Num>0)
    {
        result = result * 10 + (Num%10);
        Num /=10;
    }
    if(temp==result)
    {
        printf("Palindrome...");
    }
    else
    {
        printf("Not palindrom...");
    }
    return;
}