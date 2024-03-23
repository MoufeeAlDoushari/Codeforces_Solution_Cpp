#include<bits/stdc++.h>
using namespace std ;

int main () {
    string s;
    cin >> s;
    int n= s.size();
    for (int i=0;i<n;i+=2) {
        for(int j=i+2;j<n;j+=2) {
            if(s[i]>s[j]) {
                int temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<< s << endl;
}
