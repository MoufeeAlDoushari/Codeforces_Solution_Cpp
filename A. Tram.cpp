#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a,b;
    int c=0,d=0;
    for (int i=0;i<n;i++) {
       cin>>a>>b;
       c=c-a;
       c=c+b;
       if(c>d){
        d=c;
       }
    }
    cout << d << endl;
    return 0;
}


