#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int count=0;
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        long long int arr[n];
        long long int arr1[n];
        for(int j=0;j<n;j++) {
            cin>>arr[j];
        }
        for(int j=0;j<n;j++) {
            cin>>arr1[j];
        }
        for(int j=0;j<n;j++) {
            if(arr[j]>arr1[j]){
                arr[n-1]=arr[j];
                sort(arr,arr+n);
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
