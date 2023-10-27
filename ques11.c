// 11. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
#include<stdio.h>
struct Date
{
    int date,month,year;
};

void main()
{
    struct Date d[2];
    for(int i=0;i<2;i++)
    {
        printf("Input Date %d: \n",i+1);
        printf("Input day, month and year respectively:");
        scanf("%d %d %d",&d[i].date,&d[i].month,&d[i].year);
    }
    if(d[1].date == d[2].date && d[1].month==d[2].month && d[1].year==d[2].year)
    {
        printf("Dates are equal!");
    }
    else{
        printf("Dates are not equal!");
    }





}