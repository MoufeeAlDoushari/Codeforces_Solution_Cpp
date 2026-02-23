#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        bool possible = true;

        for(int i = 1; i <= n; i += 2){
            if(a[i]!=i){
                possible = false;
                break;
            }
        }

        if(possible) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }

    return 0;
}

