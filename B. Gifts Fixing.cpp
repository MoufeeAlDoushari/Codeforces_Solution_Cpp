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
	int n,minA=INT_MAX,minB=INT_MAX;
	cin>>n;
	vi a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		minA=min(minA,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		minB=min(minB,b[i]);
	}
	ll total=0;
	for(int i=0;i<n;i++)
	{
		int dif=max(a[i]-minA,b[i]-minB);
		total+=dif;
	}
	cout<<total<<endl;
}
int main()
{
    DOUSHARI
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		solve();
	}
    return 0;
}
