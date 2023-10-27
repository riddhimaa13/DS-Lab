// 6. Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.
#include<stdio.h>
struct add
{
    int real,imag;
     

}s[2];
void main()
{
    int sreal=0, simag=0;
    for(int i=0;i<2;i++)
    {
        printf("Input Real and Imaginary part %d respectively:",i+1,i+1);
        scanf("%d %d",&s[i].real,&s[i].imag);
        sreal+=s[i].real;
        simag+=s[i].imag;

    }
        printf("Real=%d Imaginary=%d",sreal,simag);

      
    // while(sinch>=12)
    // {
    //     sinch=sinch-12;
    //     sfeet++;
    // }
    // printf("feet=%d inche=%d",sfeet,sinch);


     
    
}