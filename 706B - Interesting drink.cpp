#include <bits\stdc++.h>
using namespace std;

int main () {
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int q;
    cin>>q;
    while(q--) {
        long long int count=0;
        long long int m;
        cin>>m;
        count=upper_bound(arr,arr+n,m)-arr;
        cout<<count<<endl;
    }
    return 0;
}
