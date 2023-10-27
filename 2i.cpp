#include<iostream>
using namespace std;

int binary(int num)
{
    int rem,bin=0,i=1;
    while(num>0)
    {
        rem=num%2;
        bin+=rem*i;  
        num=num/2;

        i=i*10;

         
    }
    
    return bin;
}
int main()
{
    int num,r;
    printf("Input number to convert it into binary:");
    scanf("%d",&num);
    // r=binary(num);
    printf("%d",binary(num));

    return 0;
}


