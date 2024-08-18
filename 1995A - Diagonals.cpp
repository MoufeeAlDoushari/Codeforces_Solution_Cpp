#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        if(k<=n){
            cout<<(k>0)<<endl;
            continue;
        }
        k-=n;
        int ans=1;
        int c=n-1;
        while(k>0){
            k-=c;
            ans++;

            if(k<=0) break;

            k-=c;
            ans++;

            c--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
