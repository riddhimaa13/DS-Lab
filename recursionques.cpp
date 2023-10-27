#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    if(n==0)
    {
        return 0;
    }
    return sum(n-1)+n;
}
// int power(int n, int a)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     return power((n-1),a)*a;
// }

int power(int n, int a)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return power(n/2,a*a);
    }
    else{
        return a*power((n-1)/2,a*a);
    }
}
int main()
{
    int p1=power(2,9);
    int p2=power(2,4);
    printf("%d ",p1);
    printf("%d ",p2);
    printf("%d ",sum(5));
    return 0;
}   