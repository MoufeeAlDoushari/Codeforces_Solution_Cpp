#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    tt*=3;
    while(tt--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]=='?'){
            if(s[1]=='B' && s[2]=='C'){
                cout<<"A"<<endl;
            }
            else if(s[1]=='A' && s[2]=='C'){
                cout<<"B"<<endl;
            }
            else if(s[1]=='A' && s[2]=='B'){
                cout<<"C"<<endl;
            }
        }
    }
    return 0;

}
