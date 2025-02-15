#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        for(int i=s.size();i>0;i--) {
            if(s[i]=='s' && s[i-1]=='u'){
                s[i-1]='i';
                break;
            }
        }
        for(int i=0;i<s.size()-1;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
