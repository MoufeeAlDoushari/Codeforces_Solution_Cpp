#include<bits/stdc++.h>
using namespace std;

int main () {
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s3;
    cin>>s3;
    string s=s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    if(s==s3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
