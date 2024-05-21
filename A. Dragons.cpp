#include <bits/stdc++.h>
using namespace std;

int main () {
    int s,l;
    cin>>s>>l;
    int c=0;
    pair<int,int>a[1000];
    for(int i=0;i<l;i++) {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+l);
    for(int i=0;i<l;i++) {
       if(s<=a[i].first){
          c++;
          break;
       }
       else{
          s=s+a[i].second;
       }
    }
    if(c>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
