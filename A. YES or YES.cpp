#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if( s=="YES" || s=="yES" || s=="yes" || s=="Yes" || s=="YeS" || s=="YEs" || s=="yEs" || s=="yeS"  ){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
