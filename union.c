#include<stdio.h>
void main()
{

    int i=0,j=0,k=0,n,m;
    printf("Input the size of Array1 and Array2:");
    scanf("%d%d",&n,&m);
    int a[n],b[m],c[n+m];
    printf("Input %d elements in Array1:",n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input %d elements in Array2:",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }


    // while(i<n)
    // {
    //     c[k]=a[i];
    //     k++;
    //     i++;

    // }
    int c=0;
    for(int i=0;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(c[i])

        }
        
    }


    for(int i=0;i<(n+m);i++)
    {
           printf("%d ",c[i]);
       
    }


}