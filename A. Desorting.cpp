#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int t;
    cin>>t;
    while(t--){
      long long int n,c=111111111111,v=1;
      cin>>n;
      long long int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<0){
            v=0;
            break;
        }
        else{
            c=min(c,arr[i+1]-arr[i]);
        }
      }
      if(v==0){
        cout<<"0"<<endl;
      }
      else{
        cout<<c/2+1<<endl;
      }
    }
    return 0;
}

