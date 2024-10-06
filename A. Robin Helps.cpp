#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n,k,zero=0,gold=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++) {

            if(arr[i]>=k){
                gold+=arr[i];
            }
            else if(arr[i]==0 && gold) {
                arr[i]=1;
                gold--;
                zero++;
            }

        }
        cout<<zero<<endl;
        /*sort(arr,arr+n);
        for(int i=0;i<n;i++) {
            cout<<arr[i];
        }
        cout<<arr[n-1]<<endl;

        if(zero==0 ){
            cout<<"0"<<endl;
        }
        else{
            if(n>gold){
                cout<<gold<<endl;
            }
            else{
                cout<<zero<<endl;
            }
        }*/
    }
    return 0;
}
