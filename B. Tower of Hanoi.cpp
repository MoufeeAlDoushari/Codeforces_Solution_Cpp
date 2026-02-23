#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> t[i][j];

    int n;
    cin >> n;

    static long long dp[41][3][3];
    const long long INF = 4e18;

    // base
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            dp[0][i][j] = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            dp[1][i][j] = (i == j ? 0 : t[i][j]);

    // DP
    for (int d = 2; d <= n; d++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == j) {
                    dp[d][i][j] = 0;
                    continue;
                }
                int k = 3 - i - j;

                // direct move
                long long direct =
                    dp[d-1][i][k] + t[i][j] + dp[d-1][k][j];

                // indirect move (largest disk moves twice)
                long long indirect =
                    dp[d-1][i][j] +
                    t[i][k] +
                    dp[d-1][j][i] +
                    t[k][j] +
                    dp[d-1][i][j];

                dp[d][i][j] = min(direct, indirect);
            }
        }
    }

    cout << dp[n][0][2] << "\n";
    return 0;
}
