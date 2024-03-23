#include<bits/stdc++.h>
using namespace std ;

int main () {
    int x;
    cin >> x;
    int first_run=5;
    int c=1;
    if(x<=5) {
        cout << c <<endl;
        return 0;
    }

    while(x>first_run){
        first_run+=5;
        c++;
    }
    cout << c << endl;
    return 0;
}

