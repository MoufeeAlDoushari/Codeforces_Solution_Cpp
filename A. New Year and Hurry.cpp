#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int t=240;
    int r=t-k;
    int c=0;
    int m=0;
    for(int i=1;i<=n;i++) {
        m+=5*i;
        if(m<=r){
            c++;
        }
        else {
            break;
        }
    }
    cout<<c<<endl;
}
