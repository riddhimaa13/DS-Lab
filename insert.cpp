#include<iostream>
using namespace std;

int main()
{
    int len , a[50], num, pos;
    printf("Input lenght of array:");
    scanf("%d",&len);
    printf("Input %d elements: \n",len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is: \n");
    for(int i=0;i<len;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nInput the element to be inserted: ");
    scanf("%d",&num);
    printf("\nInput position to be inserted:");
    scanf("%d", &pos);

    for(int i=len-1;i>= pos;i--)
    {
        a[i+1]=a[i];


    }
    a[pos-1]=num;
    len++;
    for(int i=0;i<len;i++)
    {
        printf("%d \t ",a[i]);
    }




    return 0;
}