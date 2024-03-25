#include<iostream>
using namespace std;
int main ()
{
    int tt,n,k,arr[10000],flag;
    cin>>tt;
    for(int i=1;i<=tt;i++){
        cin>>n>>k;
        flag=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(k==arr[i]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
