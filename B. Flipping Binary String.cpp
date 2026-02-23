#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ones, zeros;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ones.push_back(i + 1);
        else zeros.push_back(i + 1);
    }

    int cnt1 = ones.size();
    int cnt0 = zeros.size();

    if (cnt1 % 2 == 0) {

        cout << cnt1 << endl;
        for (int i = 0; i < cnt1; i++) {
            cout << ones[i];
            if (i != cnt1 - 1) cout << " ";
        }
        cout << endl;
    }
    else if (cnt0 % 2 == 1) {
        cout << cnt0 << endl;
        for (int i = 0; i < cnt0; i++) {
            cout << zeros[i];
            if (i != cnt0 - 1) cout << " ";
        }
        cout << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
