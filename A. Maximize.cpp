#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int c=0;
    for(int i=0;i<t;i++) {
       int x;
       cin>>x;
       if(x==2) {
            cout<<"1"<<endl;
       }
       for(int j=2;j<=x-1;j++) {
            if(x%j==0){
                cout<<x-j<<endl;
                break;
            }
            else{
                c++;
            }
       }
       if(c==(x-2)){
            cout<<x-1<<endl;
       }
    }
}

