#include<bits/stdc++.h>
using namespace std;

int main () {
    int k,w;
    long long int n;
    cin >> k >> n >> w;
    int sum=0;
    for (int i=1;i<=w;i++) {
        sum=sum+(k*i);
    }
    if (sum<=n) {
       cout<< "0" << endl;
    }
    else {
        cout << (sum-n) << endl;
    }
    return 0;
}

