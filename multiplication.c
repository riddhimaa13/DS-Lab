#include<stdio.h>
void main()
{
 

    int n,m,p,q,a[50][50],b[50][50],c[50][50];
    printf("Order of Matrix 1:\n");
    scanf("%d%d",&n,&m);
    printf("Order of Matrix 1:\n");
    scanf("%d%d",&p,&q);

    printf("Input %d*%d Matrix Array1:\n",n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }
    printf("Input %d*%d Matrix Array2:\n",p,q);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    if(p==m)
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            c[i][j]=0;
            for(int k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
             

        }
        
    }
     
    
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    }
    else{
        printf("Not Possible!");
    }

 


    
}