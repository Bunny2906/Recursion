//Factorial using Recursion.

#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fact(n);
    return 0;
}
/*
Sample Output:
enter the value of n:7
Factorial of 7 is: 5040
*/

