#include<bits/stdc++.h>
using namespace std ;

int main () {
    string s;
    cin >> s;
    int n=s.size() ;
    int c=0;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    sort(s.begin(),s.end());

    for ( int i=0;i<n;i++) {

        if (s[i]==s[i+1]) {
                c++;
        }
    }
    if ((n-c)%2==0) {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<< "IGNORE HIM!" <<endl;
    }
    return 0;
}
