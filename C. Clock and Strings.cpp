#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int e=0,f=0;
        if(a>b){
            swap(a,b);
        }
        if(c>d) {
            swap(c,d);
        }
        if(c>=a && c<=b){
            e++;
        }
        if(d>=a && d<=b){
            e++;
        }
        if(e==1){
            f=1;
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}
