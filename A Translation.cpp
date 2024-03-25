#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    int n= s.size();
    string t;
    cin>>t;
    int alada=n-1;
    int c=0;
    for (int i=0;i<n;i++) {
        if(s[alada-i]==t[i]){
            c++;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
