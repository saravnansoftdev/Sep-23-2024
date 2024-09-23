#include <stdio.h>
int main()
{
    int n;
    char ch = 'y';
    //printf("enter a number: ");
    //scanf("%d", &n);
    //printf("Square of %d is %d", n, n * n);
    while (ch=='y')
    {
        printf("\nenter a number: ");
        scanf("%d", &n);
        printf("Square of %d is %d\n", n, n * n);
        printf("Do you want to continue: ");
        //scanf("%c", &ch);
        ch = getche();
    }
    return;
}