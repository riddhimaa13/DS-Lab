#include<iostream>
using namespace std;

int top=-1;
int n,stack[40],item,choice;
char op='y';


void push()
{
    
    if(top >= n-1)
    {
        printf("Stack Overflow!!");
    }
    else
    {
        top=top+1;
        printf("Input element:");
        scanf("%d",&item);
        stack[top]=item;


    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow!!");
    }
    else{
        printf("Popped element is: %d",stack[top]);
        top=top-1;
    }

}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]); 
    }

}



int  main()
{ 
    printf("Input the number of elements:");
    scanf("%d",&n);


do
{
    printf("Input choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        // display();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    
    default: printf("Wrong Input!!");
        break;
    }
    printf("\nRepeat or not?");
    scanf(" %c",&op);

    
} while (op=='y');

    
    return 0;

}