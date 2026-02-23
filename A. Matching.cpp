#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin >> st;

    int w = 1;
    if(st[0] == '0')
    {
        w = 0;
    }
    if(st[0] == '?')
    {
        w = 9;
    }
    for(int i = 1 ; i < st.size() ; i++)
    {
        if(st[i] == '?')
        {
            w *= 10;
        }
    }
    cout << w << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
