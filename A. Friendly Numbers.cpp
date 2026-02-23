#include<bits/stdc++.h>
using namespace std;

long long ds(long long n)
{
    long long sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long cnt=0;
        for(long long i=n+1;i<=n+90;i++)
        {
            if(i-ds(i)==n)
                cnt++;
        }
        cout <<cnt << endl;
    }
    return 0;
}
