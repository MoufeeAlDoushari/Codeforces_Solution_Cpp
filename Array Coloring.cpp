#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int sum=0;
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++) {
            cin>>arr[j];
            sum=sum+arr[j];
        }
        if(sum%2==0) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        sum=0;
    }
    return 0;
}
