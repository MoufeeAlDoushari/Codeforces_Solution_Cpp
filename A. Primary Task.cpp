#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int a;
        cin>>a;

        long long x=0, y=0;

        string s=to_string(a),b;
        for(int i=2; i<s.size(); i++)
            b+=s[i];
        if(s.size()>=3)
        {
            x=s[2]-'0';
            y=stoi(b);
        }
        if((s[0]=='1' && (s.size()>=2 && s[1]=='0')) && (y>=10 || x>=2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

