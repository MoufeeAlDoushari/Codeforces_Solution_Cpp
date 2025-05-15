#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        // total possible left‐expansions by day n is -l
        int maxLeft = -l;

        // choose as many left‐expansions as possible up to m
        int a = min(m, maxLeft);
        // the rest must be right‐expansions
        int b = m - a;

        // after a left and b right expansions:
        // segment is from -a to +b, and (b - (-a)) = a + b = m
        cout << -a << " " << b << "\n";
    }
    return 0;
}
