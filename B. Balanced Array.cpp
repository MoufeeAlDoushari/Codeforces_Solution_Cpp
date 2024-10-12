#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=1;
        int sumeven=0;
        int sumodd=0;
        if(n%4==0){
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
                sumeven+=i;
            }
            for(int i=1;i<=n;i+=2){
                if(c < n/2){
                    cout<<i<<" ";
                    sumodd+=i;
                    c++;
                }
                else{
                   cout<<sumeven-sumodd<<endl;
                   break;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

