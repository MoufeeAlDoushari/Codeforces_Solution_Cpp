#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x;
        cin >> x;
        bool ok = false;
        for(int b = 0; b <= 100; b++) {
            if(111LL * b > x) break;
            if((x - 111LL * b) % 11 == 0) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}
