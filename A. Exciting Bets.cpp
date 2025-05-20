#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<" "<<"0"<<endl;
            continue;
        }
        long long int x= abs(a-b);
        long long int y= min(a%x,x-(a%x));
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
