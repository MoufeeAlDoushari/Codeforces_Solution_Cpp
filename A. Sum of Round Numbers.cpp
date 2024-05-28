#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int n;
        cin>>n;
        int c=0;
        vector<int>a;
        if(n%10!=0){
            a.push_back(n%10);
        }
        int ans=n%10;
        n-=ans;
        if(n%100!=0){
            a.push_back(n%100);
        }
        ans=n%100;
        n-=ans;
        if(n%1000!=0){
            a.push_back(n%1000);
        }
        ans=n%1000;
        n-=ans;
        if(n%10000!=0){
            a.push_back(n%10000);
        }
        if(n>=10000 && n%10000==0){
            a.push_back(n);
        }
        cout<<a.size()<<endl;
        for(int i=0;i<a.size();i++) {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
