#include<bits/stdc++.h>
using namespace std;

int main () {
    int c=0,d=0;
    string s;
    cin>>s;

    for(int i=1;i<s.size();i++) {
        if(islower(s[i])){
            c++;
        }
    }

    for(int i=0;i<s.size();i++) {
        if(isupper(s[i])){
            d++;
        }
    }
    if(s.size()==d){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s;
        return 0;
    }


    if(islower(s[0]) && c==0){
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++) {
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }

    else{
        cout<<s;
    }


    return 0;
}

