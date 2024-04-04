#include<bits/stdc++.h>
using namespace std;
/*
int main () {
    long long int n;
    cin>>n;
    int sum=0;
    int sign=-1;
    for (int i=1;i<=n;i++) {
        if(i%2==0) {
            sum+=i;
        }
        else{
           sum=(sign*i)+sum;
        }
    }
    cout<<sum<<endl;
    return 0;
}*/

int main () {
    long long n;
    cin>>n;
    long long a;
    int sign=-1;
    if(n%2==0) {
        a=n/2;
    }
    else{
        a=((n+1)/2)*(sign);
    }
    cout<<a<<endl;
    return 0;
}
