#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,c1=0,c2=0,c3=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            c1++;
        if(arr[i]==2)
            c2++;
        if(arr[i]==3)
            c3++;
    }
    int m=max(max(c1,c2),c3);
    cout<<n-m<<endl;
}
