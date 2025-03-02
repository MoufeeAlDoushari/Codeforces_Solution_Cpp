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

int main() {
    DOUSHARI
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        int l=0;
        for(int i=0;i< n ;i++){
            if(s[i]=='B'){
                f=i;
                //cout<<f<<endl;
                break;
            }
        }
        for(int i = n ;i>=0;i--){
            if(s[i]=='B'){
                l=i+1;
                //cout<<l<<endl;
                break;
            }
        }
        cout << l-f <<endl;
    }
    return 0;
}
