#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int i=0;
    int c=0;
    int n=s.size();
    while(n--)
    {
        if(((s[i]=='0') && (s[i+1]=='0') && (s[i+2]=='0') && (s[i+3]=='0') && (s[i+4]=='0') && (s[i+5]=='0') && (s[i+6]=='0')) || ((s[i]=='1') && (s[i+1]=='1') && (s[i+2]=='1') && (s[i+3]=='1') && (s[i+4]=='1') && (s[i+5]=='1') && (s[i+6]=='1') ) )
        {
            c++;
            break;
        }
        else
        {
            i++;
        }
    }
    if(c==1) {
        cout << "YES" <<endl;
    }
    else {
        cout << "NO" <<endl;
    }
    return 0;
}
