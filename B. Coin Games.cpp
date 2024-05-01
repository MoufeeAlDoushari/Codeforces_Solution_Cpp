#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int u=0,d=0;
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j++) {
            if(s[j]=='U'){
                u++;
            }
            else{
                d++;
            }
        }
        cout<<u<<endl;
        cout<<d<<endl;
        if(u%2==0) {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        u=0;
        d=0;
    }
    return 0;
}
