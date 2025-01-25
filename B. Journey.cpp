#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long int n, a, b, c;
        cin >> n >> a >> b >> c;

        long long total = a + b + c;
        long long count = 0;

        // Calculate full cycles of a + b + c
        if (n >= total) {
            count += n / total * 3;  // Each cycle contributes 3 additions
            n %= total;             // Remaining value after full cycles
        }

        // Handle the remaining value with minimal additions
        if (n > 0) {
            if (n <= a) {
                count++;
            } else if (n <= a + b) {
                count += 2;
            } else {
                count += 3;
            }
        }

        cout << count << endl;
    }

    return 0;
}
