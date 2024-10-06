#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        long long int x,y;
        cin>>x>>y;
        long long int z=min(x,y);
        if(n%z==0){
            cout<<n/z<<endl;
        }
        else{
            cout<<(n/z)+1<<endl;
        }
    }
    return 0;
}
