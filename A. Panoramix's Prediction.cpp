#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;
    int c=1;
    for(int i=2;i<m;i++){
        if(m%i==0){
           c=0;
           break;
        }
    }
    if(c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
