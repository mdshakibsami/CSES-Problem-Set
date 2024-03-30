#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> m;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i]);
        m[s[i]]++;
    }

    // sort the vector
    sort(v.begin(), v.end(), greater<char>());

    int count = 0;
    bool flag = false, oddOneFlag = false;
    char oddOne;
    for (auto x : m)
    {
        if (x.second & 1)
        {
            count++;
            if (count > 1)
            {
                flag = true;
                break;
            }
            else if (count == 1)
            {
                oddOne = x.first;
                oddOneFlag = true;
            }
        }
    }
    if (flag)
        cout << "NO SOLUTION" << endl;
    else
    {
        deque<char> d;

        if (oddOneFlag)
        {
            d.push_back(oddOne);
            for (int i = 0; i < v.size(); i++)
            {
                if (oddOne == v[i])
                {
                    v.erase(v.begin() + i);
                    break;
                }
            }
        }

        int count = 0;
        for (auto x : v)
        {

            count++;
            if (count & 1)
            {
                d.push_front(x);
            }
            else
            {
                d.push_back(x);
            }
        }
        for (auto x : d)
            cout << x;
        cout << endl;
    }
}