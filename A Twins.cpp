#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    int s1=0,s2=0,c=0;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
        s1+=arr[i];
    }
    s1=s1/2;
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--) {
        s2+=arr[i];
        c++;
        if(s1<s2){
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
