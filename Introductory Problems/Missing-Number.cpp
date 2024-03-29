#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,hole_sum=0;
    for(int i=0;i<n-1;i++)
    {
    
        int x;
        cin>>x;
        sum+=x;
    }
    for(int i=1;i<=n;i++) hole_sum+=i;
    cout<<hole_sum-sum<<endl;
}