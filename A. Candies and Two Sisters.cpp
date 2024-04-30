#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long int a;
        cin>>a;
        if(a%2==0) {
            a=(a/2)-1;
            cout<<a<<endl;
        }
        else{
            a=a/2;
            cout<<a<<endl;
        }
    }
    return 0;
}

