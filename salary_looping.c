#include <stdio.h>

int main()
{
    int salary;
    while (salary <= 5000)
    {
        printf("enter your salary: ");
        scanf("%d", &salary);
    }
    printf("your salary is %d rupees", salary);
    return;
}