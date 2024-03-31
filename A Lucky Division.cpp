#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int a;
    int c=0;
    if( n%4==0 || n%7==0 )
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        while(n>=10)
        {
            a=n%10;
            n=n/10;
            if( a!=4 && a!=7)
            {
                c++;
            }
        }
    }
    if((n==4 || n==7) && c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}


