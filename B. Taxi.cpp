#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,c1,c2,c3,c4,a1,b=0,d,e=0,f,s=0;
    cin>>n;
    c1=c2=c3=c4=0;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==4){
            c4++;
        }
        if(a[i]==3){
            c3++;
        }
        if(a[i]==2){
            c2++;
        }
        if(a[i]==1){
            c1++;
        }
    }
    d=c2%2;
    s=c4+(c2/2);
    if(c3>c1){
        s=s+c1;
        a1=c3-c1;
        s=s+a1;
    }
    else{
        s=s+c3;
        b=c1-c3;
    }

    if(b>=2 && d==1){
        s++;
        b=b-2;
        d=b%4;
        if(d>0){
            d=1;
        }
        s+=d;
        b=b/4;
        s+=b;
    }
    else if(b==1 && d==1){
        s++;
    }
    else if(b>0 && d==0){
        d=b%4;
        if(d>0){
            d=1;
        }
        s+=d;
        b=b/4;s+=b;
    }
    else if(d==1){
        s++;
    }
    cout<<s<<endl;
    return 0;
}
