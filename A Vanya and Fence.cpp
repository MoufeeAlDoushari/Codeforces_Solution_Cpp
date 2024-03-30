#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,h;
    cin >>n>>h;
    int c=0;
    for (int i=1;i<=n;i++) {
        int a;
        cin>>a;
        if(a<=h){
            c++;
        }
        else {
            c+=2;
        }
    }
    cout<<c<<endl;

}
