#include<bits/stdc++.h>
using namespace std;

int main () {
    int k,r;
    cin>>k>>r;
    int i=1;
    while(1){

        int m=k*i;
        if( m%10==r || m%10==0) {
            cout<<i<<endl;
            break;
        }
        else{
            i++;
        }
    }
    return 0;
}
