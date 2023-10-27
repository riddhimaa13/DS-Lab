// 12. Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries. Hours of work per day 8
//  Increase in salary $50

#include<stdio.h>
struct Employee
{
    char name[20];
    float salary;
    float hours;

}e[2];

void main()
{
    for(int i=0;i<2;i++)
    {
        printf("Input the Information of Employee %d:\n",i+1);
        printf("Input Name:");
        fflush(stdin);
        gets(e[i].name);
        printf("Input Salary:");
        scanf("%f",&e[i].salary);
        printf("Input no. of hours per day:");
        scanf("%f",&e[i].hours);
        if(e[i].hours>8)
        {
            e[i].salary=e[i].salary+50;

        }

    }
    for(int i=0;i<2;i++)
    {
        printf("\nName:");
        fflush(stdin);
        puts(e[i].name);
   
        printf("\nNumber of hours per day:");
        printf("%0.2f",e[i].hours);

        printf("\nSalary:");
        printf("%0.2f",e[i].salary);     

    }






}