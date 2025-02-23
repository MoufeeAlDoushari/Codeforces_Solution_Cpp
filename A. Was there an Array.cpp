#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        int n,c=1;
        cin>>n;
        int a=n-2;
        int arr[a];
        for(int i=0;i<a;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<a-2;i++) {
            if(n==3 || n==4 ){
                break;
            }
            if(arr[i]==1 && arr[i+1]==0 && arr[i+2]==1){
                c=0;
                break;
            }
        }
        if(c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
