#include<stdio.h>
void main()
{

    int n;
    printf("Input number of elements in an array:");
    scanf("%d",&n);
    int a[n],sum=0;
    int s=n*(n+1)/2;
    printf("Input consecutive number in array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    int miss;
    miss=sum-s;
    printf("Missing Number:%d",miss);



    

}