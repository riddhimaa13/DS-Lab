#include<iostream>
using namespace std;
int n,top=-1;
int stack[100],element;


void push()
{
    if(top>= n-1)
    {
        cout<<"Stack Overflow!";

    }
    else{
        printf("Input element to be insert:");
        scanf("%d",&element);
        stack[top]=element;
        top=top+1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    
    return 0;
}