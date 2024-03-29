#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    int count=0,max =0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1]) count++;
        else count=0;

        if(count>max) max =count;
    }
    cout<<max+1<<endl;

}