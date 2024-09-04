#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
const int N = 1e9 + 7;

template <typename T>
istream& operator>>(istream& in, vector<T>& a){for(T& x : a){in >> x;}return in;}

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int z=sqrt(n);
	if(z*z!=n){
		cout<<"NO"<<endl;
		return;
	}
	int c0=0;
	for(int i=0; i<n; i++){
		if(s[i]=='0')c0++;
	}
	int x=z-2;
	if(c0==x*x)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
    cin >> t;
	while (t--)
		solve();
}
