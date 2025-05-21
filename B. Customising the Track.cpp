#include<bits/stdc++.h>
using namespace std;
int main (){
    long long t;
    cin>>t;
    while(t--)
    {
        long long int n,k,tmp;
        cin>>n;
        long long int a[n+1],i,j,sum=0;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
        long long x=sum%n;
        if(!x)
            cout<<0<<endl;
        else
            cout<<(n-x)*x<<endl;
    }
    return 0;
}
