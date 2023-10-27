#include<stdio.h>
struct Marks
{
    
    int r;
    char name[30];
    float p,c,m;

    float sum[2],per[2];
}s[2];

void main()
{
    // 7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
    // printf("Input the data:\n");
    for(int i=0;i<2;i++)
    {
        printf("\nInput Information of Student %d: \n",i+1);
        printf("Input Roll Number:");
        
        scanf("%d",&s[i].r);
        printf("Input Name:");
        fflush(stdin);
        gets(s[i].name);
        printf("Input Marks in Physics , Chem , Maths :");
        scanf("%f %f %f ",&s[i].p,&s[i].c,&s[i].m);
        for(int j=0;j<2;j++)
        {
            s[i].sum[j]+=s[i].p+s[i].c+s[i].m;
            s[i].per[j]=s[i].sum[j]/3;
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

        printf("Marks in 3 subjects:\n");
        printf("%0.2f %0.2f %0.2f",s[i].p, s[i].c, s[i].m);
        
            printf("Percentage:\n");
            printf("%0.2f ",s[i].per);
        
           

    }
 

}