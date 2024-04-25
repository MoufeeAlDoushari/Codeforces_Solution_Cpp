#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num=0;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        if(s[0]=='T'){
            num=num+4;
        }
        else if(s[0]=='C'){
            num=num+6;
        }
        else if(s[0]=='O'){
            num=num+8;
        }
        else if(s[0]=='D'){
            num=num+12;
        }
        else {
            num=num+20;
        }
    }
    cout<<num<<endl;
    return 0;

}
