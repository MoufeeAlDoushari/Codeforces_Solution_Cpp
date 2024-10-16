#include<bits/stdc++.h>
using namespace std;

int main () {
    int n ;
    cin>>n;
    int x=0,y=0;
    while(n--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            x++;
        }
        if(c>m){
            y++;
        }
    }
    if(x>y){
        cout<<"Mishka"<<endl;
    }
    else if(x<y){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
