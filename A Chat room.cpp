#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin>>s;
    int n= s.size();
    int c=0;
    int rakha;
    for (int i=0;i<n;i++) {
        if(s[i]=='h'){
            c++;
            rakha=i;
            break;
        }
    }
    for (int i=rakha+1;i<n;i++) {
        if(s[i]=='e'){
            c++;
            rakha=i;
            break;
        }
    }
    for (int i=rakha+1;i<n;i++) {
        if(s[i]=='l'){
            c++;
            rakha=i;
            break;
        }
    }
    for (int i=rakha+1;i<n;i++) {
        if(s[i]=='l'){
            c++;
            rakha=i;
            break;
        }
    }
    for (int i=rakha+1;i<n;i++) {
        if(s[i]=='o'){
            c++;
            rakha=i;
            break;
        }
    }
    if(c==5){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
