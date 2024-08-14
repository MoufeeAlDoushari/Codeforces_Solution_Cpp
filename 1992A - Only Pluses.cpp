#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb  push_back
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    int t;
    cin>>t;
    while(t--) {
        int arr[3];
        for(int i=0;i<3;i++) {
            cin>>arr[i];
        }
        for(int i=1;i<=5;i++){
            sort(arr,arr+3);
            arr[0]+=1;
        }
        cout<<arr[0]*arr[1]*arr[2]<<endl;
    }
}
