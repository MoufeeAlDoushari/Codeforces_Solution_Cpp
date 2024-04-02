#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int c=0;
    for (int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        int p=b-1;
        if(p>a) {
          c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
