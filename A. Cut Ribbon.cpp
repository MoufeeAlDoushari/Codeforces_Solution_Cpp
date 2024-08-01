#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    while(cin>>n>>a>>b>>c)
    {
       int ans=0;
       for(int i=0;i*a<=n;++i)
       {
           for(int j=0;i*a+j*b<=n;++j)
           {
                int rem=n-i*a-j*b;
                if(rem%c==0)
                {
                    int k=rem/c;
                ans=max(ans,i+j+k);}
           }

       }
       cout<<ans<<endl;
    }
    return 0;
}
