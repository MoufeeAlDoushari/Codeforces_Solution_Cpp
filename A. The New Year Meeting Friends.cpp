#include<bits/stdc++.h>
using namespace std;

int main () {
    int x,y,z;
    cin>>x>>y>>z;
    if((x>y || x>z) && (x<y || x<z)){
        if(y>z){
            cout<<y-z<<endl;
        }
        else {
            cout<<z-y<<endl;
        }
    }
    else if((y>x || y>z) && (y<x || y<z)){
        if(x>z) {
            cout<<x-z<<endl;
        }
        else {
            cout<<z-x<<endl;
        }
    }
    else {
        if(x>y) {
            cout<<x-y<<endl;
        }
        else {
            cout<<y-x<<endl;
        }
    }
}
