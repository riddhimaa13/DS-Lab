#include<stdio.h>
void main()
{
    int n, arr[110];
    scanf("%d",&n);
    printf("Input a sorted array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int ele;
    printf("Input the element to be inserted:");
    scanf("%d",&ele);
    int i=n-1, pos=0;
    
    while(arr[i]>ele)
    {
        arr[i+1]=arr[i];
        i--;
        pos++;
    }
    arr[pos-1]=ele;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    
     
}