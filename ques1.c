#include<stdio.h>
struct student
{
    /* data */
    int r;
    char name[30];
    float m[6];
}s[2];

void main()
{
    // printf("Input the data:\n");
    for(int i=0;i<2;i++)
    {
        printf("\nInput Information of Student %d: \n",i+1);
        printf("Input Roll Number:");
        
        scanf("%d",&s[i].r);
        printf("Input Name:");
        fflush(stdin);
        gets(s[i].name);
        printf("Input Marks in 6 subjects:");
        for(int j=0;j<6;j++)
        {
            scanf("%f",&s[i].m[j]);

        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        printf("\nInformation of Student %d: \n",i+1);
        printf("Roll Number:");
        
        printf("%d\n",s[i].r);
        printf("Name:");
        
        puts(s[i].name);
        printf("Marks in 6 subjects:\n");
        for(int j=0;j<6;j++)
        {
            printf("%0.2f ",s[i].m[j]);

        }
    }
 

}