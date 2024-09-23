#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,avg,total,no_of_students=3;
    while(no_of_students>0)
    {
        printf("enter the marks: \n");
        scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
        total = m1+m2+m3+m4+m5;
        avg = total/5;
        printf("Student 1 Mark Details: \n");
        printf("Total = %d\n",total);
        printf("Average = %d\n",avg);     
        no_of_students--;   
    }

}