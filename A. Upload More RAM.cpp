using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    cout << 1 + (n - 1) * k << nl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
