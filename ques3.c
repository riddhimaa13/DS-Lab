// 3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include<stdio.h>
struct student
{
    /* data */
    int r,age;
    char name[30];
    float m;

}s[15];

void main()
{
     
    for(int i=0;i<2;i++)
    {
        printf("\nInput Information of Student %d: \n",i+1);
        printf("Input Roll Number:");
        
        scanf("%d",&s[i].r);
        printf("Input Name:");
        fflush(stdin);
        gets(s[i].name);
        printf("Input age:");
        scanf("%d",&s[i].age);
        printf("Input Marks: ");    
        scanf("%f",&s[i].m);

    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        printf("\nInformation of Student %d: \n",i+1);
        printf("Roll Number:");
        printf("%d",s[i].m);
        
        printf("%d\n",s[i].r);
        printf("Name:");
        puts(s[i].name);

         printf("Age:");
        printf("%d",s[i].age);
 
        printf("Marks:\n");
         
            printf("%0.2f ",s[i].m);

    }
 

}