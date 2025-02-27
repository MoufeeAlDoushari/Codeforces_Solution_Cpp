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

int main(){
    DOUSHARI
    int n;
    cin>>n;
    if(n%2!=0 || n==0){
        cout<<"-1"<<endl;
    }
    else{
        int first=2;
        cout<<first<<" ";
        int second=1;
        cout<<second<<" ";
        //cout<<n<<" ";
        for(int i=1;i<(n/2);i++){
            first+=2;
            cout<<first<<" ";
            second+=2;
            cout<<second<<" ";
        }
    }
    return 0;
}
