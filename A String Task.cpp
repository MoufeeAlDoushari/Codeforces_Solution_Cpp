#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int n=s.size();
    for(int i=0;i<n;i++){
        if( s[i]=='a' || s[i]=='e' || s[i]=='i' ||  s[i]=='o' || s[i]=='u' ) {
            for(int j=i;j<n;j++) {
                s[j]=s[j+1];
            }
            i--;
            n--;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<"."<<s[i];
    }
    return 0;
}
