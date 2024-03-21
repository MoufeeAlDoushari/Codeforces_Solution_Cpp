#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int sum=0;
    int sign=-1;
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        int arr[n-1];
        for(int j=0;j<(n-1);j++) {
            cin>>arr[j];
            sum=sum+arr[j];
        }
        cout<< sign*sum << endl;
        sum=0;
    }
    return 0;
}
