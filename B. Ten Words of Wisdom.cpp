#include<bits/stdc++.h>

#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define ull                   unsigned long long

#define DOUSHARI              ios_base::sync_with_stdio(0);
#define MOUFEE                ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll currWinner = 0, pos = 0;

    for (int i = 0; i < n; i++)
    {
        ll m, q;
        cin >> m >> q;

        if (m <= 10)
        {
            if (q > currWinner)
            {
                currWinner = q;
                pos = i + 1;
            }
        }
    }

    cout << pos << endl;
}

int main()
{
    DOUSHARI
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}
