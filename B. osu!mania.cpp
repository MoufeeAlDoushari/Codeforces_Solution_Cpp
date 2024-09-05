#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int idx = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '#') {
                    arr[idx] = j + 1;
                    idx++;
                    break;
                }
            }
        }
        for (int z = 0; z < idx ; z++) {  // Print only valid values
            cout << arr[idx-1-z] << " ";
        }
        cout << endl;
    }
    return 0;
}
