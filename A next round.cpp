#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n ;
    int k;
    cin>>k;
    int c;
    int arr[n];
    for(int i=0;i < n;i++) {
        cin>>arr[i];
    }
    int a = arr[k-1];
    for (int i=0;i<n;i++) {
        if(arr[i]>=a && arr[i]!=0) {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
