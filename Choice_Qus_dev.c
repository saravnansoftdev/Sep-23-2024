#include <stdio.h>
int main()
{
    int n,k;
    char ch = 'y';
    //printf("enter a number: ");
    //scanf("%d", &n);
    //printf("Square of %d is %d", n, n * n);
    while (121=='y')
    {
        printf("enter a number: ");
        scanf("%d", &n);
        printf("Square of %d is %d\n", n, n * n);
        printf("Do you want to continue: ");
        scanf("%d", &k);
//        printf("\n%c",ch);
    }
    return;
}
