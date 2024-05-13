#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
        ll t;
        cin>>t;
        while(t--)
        {
        	string s;
        	cin>>s;
        	ll n = s.length();
        	ll f = 0;
        	for(ll i=1;i<n;i++)
        	{
        		if(s[i]!=s[i-1])
        		{
        			char c = s[i];
        			s[i] = s[i-1];
        			s[i-1] = c;
        			f = 1;
        			break;
        		}
        	}
        	if(f)
        	{
        		cout<<"YES"<<endl;
        		cout<<s<<endl;
        	}
        	else
        	{
        		cout<<"NO"<<endl;
        	}
        }
        return 0;
}
