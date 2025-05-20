#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b;
    cin>>a>>b;
    long long int ans=LLONG_MAX;
    for(int i=0;i<32;i++)
    {
        long long  option=i;
        long nb=b+i;
        long temp = a;
        if(nb==1)
        {
            continue;
        }
        while(temp>0)
        {
            temp=temp/nb;
            option++;
        }

        ans=min(ans,option);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
