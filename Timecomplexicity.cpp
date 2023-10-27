#include<iostream>
using namespace std;
void fun1(int n)    //T(n)
{ 
    if(n>0)         //1
    {
        printf("%d",n);     //1
        fun1(n-1);          //T(n-1)
    }
}

int main()
{
    fun1(4);
    return 0;
}

//Time Complexicity 
// T(n) = 1  if n=0
// T(n) = T(n-1)+2   if n>0