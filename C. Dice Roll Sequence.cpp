#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        const int INF = 1e9;
        vector<int> prev(7, INF), curr(7, INF);

        for(int v = 1; v <= 6; v++){
            prev[v] = (v == a[0] ? 0 : 1);
        }

        for(int i = 1; i < n; i++){
            fill(curr.begin(), curr.end(), INF);

            for(int u = 1; u <= 6; u++){         // previous value gula theke
                for(int v = 1; v <= 6; v++){     // current value gula theke
                    if(u != v && u + v != 7){
                        int cost = prev[u] + (v == a[i] ? 0 : 1);
                        curr[v] = min(curr[v], cost);
                    }
                }
            }

            prev = curr;
        }

        int ans = *min_element(prev.begin()+1, prev.end());
        cout << ans << endl;
    }

    return 0;
}
