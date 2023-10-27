#include<stdio.h>
void main()
{
    // A={1, 2, 4, 5}  , B={2, 7, 3,5};
    int n,m,a[100],b[100],c[100];
    printf("Input length of matrix 1 and length of Matrix2:\n");
    scanf("%d%d",&n,&m);
    printf("Input Matrix 1 elements:\n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input Matrix 1 elements:\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c[i]=a[i];

            }

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}