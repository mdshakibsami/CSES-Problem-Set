#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int ans = 1;
    for(int i=0;i<n;i++)
    {
        ans =((ans*2)%1000000007);
        
    }
    cout<<ans<<endl;
}