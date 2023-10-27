// 4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
#include<stdio.h>
struct add
{
    int feet,inches;
     

}s[2];
void main()
{
    int sfeet=0,sinch=0;
    printf("Input feet 1 and inch 1:");
    for(int i=0;i<2;i++)
    {
    scanf("%d %d",&s[i].feet,&s[i].inches);
    sfeet+=s[i].feet;
    sinch+=s[i].inches;
    }
    
    while(sinch>=12)
    {
        sinch=sinch-12;
        sfeet++;
    }
    printf("feet=%d inche=%d",sfeet,sinch);


     
    
}