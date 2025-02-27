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

int main()
{
        ll n;
        cin>>n;

        if(n==0)
        {
            cout<<"1";
            return 0;
        }

        if(n%4==0)
            cout<<"6"<<endl;
        else if(n%4==1)
            cout<<"8"<<endl;
        else if(n%4==2)
            cout<<"4"<<endl;
        else if(n%4==3)
            cout<<"2"<<endl;

        return 0;
}
