#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) {
        char s[100];
        cin >> s;
        int m= strlen(s);
        if ( m>10 ) {
            cout << s[m-m] << m-2 << s[m-1] << endl;
        }
        else {
            for (int j=0;j<m;j++) {
                cout << s[j];
            }
            cout << endl ;
        }
    }
    return 0;
}
