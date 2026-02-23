#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                even+=arr[i];
            }
            else{
                odd+=arr[i];
            }
        }
        sort(arr,arr+n);
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum1+=arr[i];
            }
            else{
                sum2+=arr[i];
            }
        }
        if(even==sum1 && odd==sum2 || even==sum2 && odd==sum1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
