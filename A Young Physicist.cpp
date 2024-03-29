#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][3];
    int s=0,s1=0,s2=0;
    for(int i=0;i<n;i++) {
            for(int j=0;j<3;j++ ) {
                cin>>arr[i][j];
            }
            s+=arr[i][0];
            s1+=arr[i][1];
            s2+=arr[i][2];
    }
    if(s==0 && s1==0 && s2==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
