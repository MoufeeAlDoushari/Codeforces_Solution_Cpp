#include<bits/stdc++.h>
using namespace std ;

int main () {
    string s;
    cin >> s;
    int n= s.size();
    int capital=0,lower=0;
    for (int i=0;i<n;i++) {
        if(s[i]>='A' && s[i]<='Z') {
            capital++;
        }
        else if(s[i]>='a' && s[i]<='z') {
            lower++;
        }
    }
    if(capital>lower) {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else if(capital<=lower) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s<<endl;
    return 0;
}
