#include <bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    long long int book[11111];
    long int i,j,n,t,ans,sum;
    while(cin>>n>>t)
    {
        for(i=0;i<n;i++)
        {
            cin>>book[i];
        }
        j=-1,sum=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(sum+book[i]<=t)
                sum+=book[i];
            else
            {
                sum+=book[i];
                while(sum>t)
                {
                    j++;
                    sum-=book[j];
                }
            }
            ans=max(ans,i-j);
        }
        cout<<ans<<endl;
    }
return 0;
}

