#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                cout<<"1"<<endl;
                c=0;
                break;
            }
        }
        if(c==1){
            cout<<s.size()<<endl;
        }
    }
    return 0;
}
