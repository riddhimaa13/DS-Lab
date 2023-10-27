#include<stdio.h>
void main()
{
    float feet, inches;
    scanf("%f%f",&feet,&inches);
    
    while(inches>12)
    {
        inches=inches-12;
        feet++;
    }
    
}
