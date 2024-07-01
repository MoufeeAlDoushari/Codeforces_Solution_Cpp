#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
       int arr[3];
       int j;
       for(j=0;j<3;j++) {
        cin>>arr[j];
       }
       sort(arr,arr+3);
       cout<<(arr[1]-arr[0]) +(-(arr[1]-arr[2]))<< endl;
    }
}
