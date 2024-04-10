#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    string s="I hate it";
    for(int i=2;i<=n;i++) {
        if(i%2==0) {
            s.insert((s.size()-2),"that I love ");
        }
        else {
            s.insert((s.size()-2),"that I hate ");
        }
    }
    cout<<s<<endl;
}
