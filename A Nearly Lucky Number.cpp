#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    int digit=1;
    int lucky_number;
    while(n>=10) {
        lucky_number=n%10;
        n/=10;
        if(lucky_number==4 || lucky_number==7) {
            digit++;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if ((n==4||n==7) && (digit==4 || digit==7 )) {
        cout << "YES" << endl;
    }

    else{
       cout << "NO" << endl;
    }
    return 0;
}

