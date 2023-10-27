#include<stdio.h>
void main()
{
    // int a[]={1,2,3}, b={4, 5 , 6};
    int n1,n2, a[20],b[20],c[50];
    printf("Input array size:");
    scanf("%d%d",&n1,&n2);
    printf("Input array 1 elements:\n"); 
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Input array 2 elements:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);

    }
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];

    }
    for(int i=n1;i<n2;i++)
    {
        c[i]=b[i];

    }
    printf("Modified array:\n");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",c[i]);
    }
}