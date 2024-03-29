#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n==1) cout<<1<<endl;
    else if (n < 4)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!(i & 1))
                cout << i << " ";
        }
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                cout << i << " ";
        }
    }
}