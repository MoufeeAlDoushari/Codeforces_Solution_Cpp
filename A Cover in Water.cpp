#include<bits/stdc++.h>
using namespace std;

int main(){
       int t,n;
       cin>>t;
       string s;
       while(t--){
         cin>>n;
         cin>>s;
         int ct=0,value=0;
         for(int i=0;i<n;i++){
            if(s[i]=='.'){
                ct++;
                value++;
            }
            else{
                ct=0;
            }
            if(ct>=3){
                break;
            }
         }
         if(ct>=3){
            cout<<2<<endl;
         }
         else{
            cout<<value<<endl;
         }
       }
       return 0;
}
