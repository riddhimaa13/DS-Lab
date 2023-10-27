#include<stdio.h>
void main()
{
    int n, arr[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int i, ele;
    printf("Input element to be deleted:");
    scanf("%d ",&ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele);
        {
            break;
        }
    }
    if(i< n)
    {
        n=n-1;
        for(int j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
    }
      
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}