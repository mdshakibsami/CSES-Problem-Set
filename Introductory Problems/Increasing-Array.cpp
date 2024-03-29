#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll answer =0;
    ll last = v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]<last)
        {
            ll x = last-v[i];
            //you can keep track of last element without inserting in vector
            last = v[i]+x;
            answer+=x;


        }else
        {
            last = v[i];
        }
    }
    cout<<answer<<endl;
}