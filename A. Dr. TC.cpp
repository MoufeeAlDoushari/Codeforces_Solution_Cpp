#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int si;
        cin>>si;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<si;i++){
            if(s[i]=='1'){
                c+=si-1;
            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
