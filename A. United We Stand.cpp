#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        bool shobsame=false;
        long long c=0;
        vector<long long> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        for(int i = 0; i < n-1; i++){
            if(b[i]==b[i+1]){
                shobsame=true;
            }
            else{
                shobsame=false;
                break;
            }
        }
        if(shobsame){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(b[i]==b[i+1]){
                    c++;
                }
                else{
                    break;
                }
            }
            cout<<c+1<<" " <<n-(c+1)<<endl;
            for(int i=0;i<=c;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=c+1;i<n;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
