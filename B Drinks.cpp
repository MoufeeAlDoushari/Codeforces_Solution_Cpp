#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int sum=0;
    double percentages;
    for(int i=1;i<=n;i++) {
        int a;
        cin>>a;
        sum+=a;
    }
    percentages=(double)sum/n;
    cout<<percentages<<endl;
    return 0;
}
