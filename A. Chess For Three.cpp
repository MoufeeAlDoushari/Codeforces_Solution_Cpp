#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        // Check if total points are even
        if ((p1 + p2 + p3) % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        // Calculate maximum possible draws
        int x = (p1 + p2 - p3) / 2;
        int max_draws = (p2 + p3 - 2 * x - p1) / 2;

        // Output result
        cout << max_draws << endl;
    }

    return 0;
}
