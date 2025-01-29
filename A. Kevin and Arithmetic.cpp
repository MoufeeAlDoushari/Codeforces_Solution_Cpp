#include <bits/stdc++.h>
 using namespace std;

int T, n;
map<int, int> mp;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  for (cin >> T; T; T--, mp.clear()) {
    cin >> n;
    for (int i = 1, a; i <= n; i++) {
      cin >> a, mp[a % 2]++;
    }
    cout << (mp[0] ? mp[1] + 1 : mp[1] - 1) << '\n';
  }
  return 0;
}
