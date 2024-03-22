#include<bits/stdc++.h>
using namespace std ;

int main () {
    string s;
    cin >> s;
    string s1;
    cin >> s1;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);

    if(s<s1) {
        cout<<"-1"<<endl;
    }
    else if(s>s1) {
        cout<<"1"<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
    return 0;
}

