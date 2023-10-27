#include<stdio.h>
void main()
{
    int a[20][20], b[20][20];
    int r,c;
    scanf("%d%d",&r,&c);
    printf("Input Array 1 elements:\n");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("Matrix after Transpose:\n ");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
        

    }







}