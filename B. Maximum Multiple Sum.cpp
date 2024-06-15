#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=2;
        long long sum=0;

        for (int i=2;i<=n;i++) {
            int k=n/i;
            long long sum1=i*k*(k+1)/2;
            if (sum1>sum) {
                sum=sum1;
                a=i;
            }
        }
        cout<<a<<endl;
    }
}
