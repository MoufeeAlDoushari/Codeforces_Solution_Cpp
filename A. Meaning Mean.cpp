#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        //for(int i=0;i<n;i++){
            //cout<<arr[i]<<" ";
        //}
        //cout<<endl;
        long long result=arr[0];
        for(int i=1;i<n;i++){
            result+=arr[i];
            result/=2LL;
            //cout<<result<<"   ";
        }
        cout<<result<<endl;
    }
    return 0;
}
