#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,a,b;
    cin>>n>>a;
    int arr[200];
    int count=0;
    for(int i=0;i<a;i++) {
        cin>>arr[i];
    }
    cin>>b;
    for(int i=a;i<a+b;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+(a+b));
    for(int i=0;i<a+b;i++) {
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    if(count==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
