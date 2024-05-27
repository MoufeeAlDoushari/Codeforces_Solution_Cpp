#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int n,k;
        cin>>n>>k;
        int c=1;
        if(n<=k || (n-k)==1 ){
            cout<<c<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}
