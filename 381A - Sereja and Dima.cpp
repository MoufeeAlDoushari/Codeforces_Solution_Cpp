#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sereja=0,dima=0;
    int l=0;
    int r=n-1;
    int check=0;
    while(l<=r){
        if(check%2==0){
            if(arr[l]>arr[r]){
                sereja +=arr[l];
                l++;
            }
            else{
                sereja +=arr[r];
                r--;
            }
        }
        else{
            if(arr[l]>arr[r]){
                dima +=arr[l];
                l++;
            }
            else{
                dima +=arr[r];
                r--;
            }
        }
        check++;
    }
    cout<<sereja<<" "<<dima<<endl;
}
