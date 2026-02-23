#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(){
    int n;
    cin >>n;

    for(ll i = 1; i <= n; ++i){
        cout << i * i << ' ';
    }
    cout << '\n';
}


int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
