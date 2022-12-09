// Fibonacci series using Recursion

#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}
int main()
{   
    int n;
    cout<<"enter no of terms : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<fib(i)<<endl;
    }
}
/*
Sample Output:
enter no of terms : 10
0
1
1
2
3
5
8
13
21
34
55
*/

