#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;
    int c=0;
    while(1){
        m-=1;
        n-=1;
        c++;
        if((n==0) || (m==0)){
            break;
        }
    }
    if(c%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}
