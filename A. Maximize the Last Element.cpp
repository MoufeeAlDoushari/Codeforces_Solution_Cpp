#include <bits/stdc++.h>
using namespace std;

int maxRemainingElement(vector<int>& a) {
    while (a.size() > 1) {
        int min_sum = INT_MAX;
        int min_index = -1;

        // Find the pair of adjacent elements with the smallest sum
        for (int i = 0; i < a.size() - 1; ++i) {
            if (a[i] + a[i + 1] < min_sum) {
                min_sum = a[i] + a[i + 1];
                min_index = i;
            }
        }

        // Remove the pair of adjacent elements
        a.erase(a.begin() + min_index);
        a.erase(a.begin() + min_index);
    }

    return a[0];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << maxRemainingElement(a) << endl;
    }

    return 0;
}
