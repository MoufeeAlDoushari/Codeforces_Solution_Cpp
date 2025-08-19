#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum=0;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                sum+=a[i]-b[i];
            }
        }
        cout<<sum+1<<endl;
    }
    return 0;
}
