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

void solve(){

        int n, k, p;
        cin >> n >> k >> p;

        int m = (abs(k) + p - 1) / p;
        //abs(m);
        if(m > n) {
            cout << "-1" << endl;
        }
        else {
            cout << m << endl;
        }

}



int main()
{
    DOUSHARI

    int t;
    cin >> t;
    while(t--)
    {
       solve();

    }
    return 0;
}
