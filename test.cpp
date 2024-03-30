#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=(fact*i)%(1000000001);
    }
    cout<<fact<<endl;
}