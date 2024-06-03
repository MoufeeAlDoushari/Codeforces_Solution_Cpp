#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s="codeforces";
        bool f=false;
        char c;
        cin>>c;
        int i=0;
        while(i<s.size()){
            if(c==s[i]){
                f=true;
                break;
            }
            i++;
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
