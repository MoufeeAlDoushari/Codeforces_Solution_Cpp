#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a;

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                a.push_back(-1);
            else
            {
                if(i==n-1 && n%2==0)
                    a.push_back(2);
                else
                    a.push_back(3);
            }

        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
