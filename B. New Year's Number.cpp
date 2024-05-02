#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int m;
        cin>>m;
        int r=m/2020;
        int ld;
        if(r<1){
            cout<<"NO"<<endl;
        }
        else{
            ld=m%2020;
            if(ld>r){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
