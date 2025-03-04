#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    int c;
    if(m>n){
        c=-1;
        cout<<c<<endl;
    }
    else{
        if(n%2==0){
            c=n/2;
        }
        else{
            c=(n/2)+1;
        }
        while(c%m!=0){
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
