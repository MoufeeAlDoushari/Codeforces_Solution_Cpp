#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;

    int value=0;
    for (int i=1;i<=n;i++) {
        string s;
        cin >> s;
        if (s=="X++" || s== "++X") {
            value++;
        }
        else {
            value=value-1;
        }
    }
    cout<< value;
    return 0;
}
