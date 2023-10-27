#include<stdio.h>
void main()
{
    // Two Pointer Apprach

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

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(n<m)
    {
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;

        }
    }
    else
    {
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }

    for(int i=0;i<(n+m);i++)
    {
           printf("%d ",c[i]);
       
    }


//T.C.= O(n)+O(n)

}