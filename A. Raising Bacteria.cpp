#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,step;
    while (cin>>n)
    {
        step=0;
        while(n>1){
            if(n%2==0)
                n=n/2;
            else
            {
                n=n-1;
                step++;
            }
        }
        cout<<step+1<<endl;
    }
    return 0;
}
