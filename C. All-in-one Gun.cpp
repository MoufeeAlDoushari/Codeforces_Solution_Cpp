#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, h, k, ans = 0, sum = 0, prefix = 0, idx = 0;
    cin >> n >> h >> k;
    vector<int> a(n), pre(n), suff(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    pre[0] = a[0]; suff[n - 1] = a[n - 1];
    ans = (h - 1) / sum;
    h = h - ans * sum;
    if(h != 0){
        for(int i = 1; i < n; i++){
            pre[i] = min(pre[i - 1], a[i]);
        }
        for(int i = n - 2; i >= 0; i--){
            suff[i] = max(suff[i + 1], a[i]);
        }
        for(int i = 0; i < n; i++){
            prefix += a[i];
            int mp = prefix;
            if(i < n - 1){
                mp += max(0LL, suff[i + 1] - pre[i]);
            }
            if(mp >= h){
                idx = i + 1;
                break;
            }
        }
    }
    cout << ans * (n + k) + idx << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


