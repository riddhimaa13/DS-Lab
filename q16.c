#include<stdio.h>
void main()
{
    int n,m;
    printf("Input the size Array1 and Array2:");
    scanf("%d%d",&n,&m);


    int a[n][n],b[n][n],c[n][n];
    printf("Input Array1:");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input Array2:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    if(n==m)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                c[i][j]=a[i][j]+b[i][j];

            }
        }
    }
    else
    {
        printf("Not Possible!!");
    }
    
        // printf("Matrix after sum of Array1 and Array2:\n");
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         printf("%d ",c[i][j]);

        //     }
        //     printf("\n");
        // }
    
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]-b[i][j];

        }

    }        
    printf("Matrix after substraction of Array1 and Array2:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }



}