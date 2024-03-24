#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int n;
    int k;
    cin >>n>>k;
    int last_digit=n%10;
    for (int i=1;i<=k;i++) {
        if(last_digit==0) {
            n/=10;
            last_digit=n%10;
        }
        else {
            n-=1;
            last_digit-=1;
        }
    }
    cout<<n<<endl;
    return 0;
}
