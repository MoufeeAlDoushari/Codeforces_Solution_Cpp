#include <iostream>
#include <vector>

using namespace std;

void reduceGrid(int n, int k, const vector<string>& grid) {
    int newSize = n / k;
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            cout << grid[i * k][j * k];
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        reduceGrid(n, k, grid);
    }

    return 0;
}

