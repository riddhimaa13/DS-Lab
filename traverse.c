
#include<stdio.h>
void main()
{
    int n, arr[110];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}