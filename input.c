#include<stdio.h>
struct student
{
    /* data */
    int r;
    char name[30];
    float m;
}s[2];

void main()
{
    printf("Input the data:\n");
    for(int i=0;i<2;i++)
    {
        printf("Input Information of Student %d(Roll No.,Name & Marks ): \n",i+1);
    
        scanf("%d %s %f",&s[i].r,s[i].name,&s[i].m);

    }
    for(int i=0;i<2;i++)
    {
        printf("Displaying Information of Student %d: \n",i+1);
        printf("%d %s %0.2f",s[i].r,s[i].name,s[i].m);
        printf("\n");

    }


}