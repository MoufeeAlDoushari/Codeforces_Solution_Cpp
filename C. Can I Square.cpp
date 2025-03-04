#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPerfectSquare(ll n)
{
    ll temp = sqrt(n);

    if (temp * temp == n)
        return true;
    return false;
}
void solve()
{
    ll n;
    cin >> n;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        sum += temp;
    }

    if (isPerfectSquare(sum))
        cout << "Yes"<<endl;
    else
        cout << "No"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}
