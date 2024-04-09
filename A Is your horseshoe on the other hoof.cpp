#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d && a==d) {
        cout<<"3"<<endl;
    }
    else if(a!=b && a!=c && b!=c && b!=d && c!=d && a!=d) {
        cout<<"0"<<endl;
    }
    else if((a==b || a==c || a==d || b==c ) && (b==c || b==d || c==d)){
        cout<<"2"<<endl;
    }
    else {
        cout<<"1"<<endl;
    }
    return 0;
}
