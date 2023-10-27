#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1;i<n-1,i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }

    }
    int dat[max+1]={0};
    for(int i=0;)




}