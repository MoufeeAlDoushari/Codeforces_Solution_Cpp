#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int c=0,j;
    for(int i=1;i<=n;i++) {
        int arr[3];
        for(j=0;j<3;j++) {
            cin>>arr[j];
        }
        if( (arr[0]==1 && arr[1]==1) || (arr[1]==1 && arr[2]==1 ) || (arr[0]==1 && arr[2]==1)) {
                c++;
        }

    }
    cout<<c<< endl;
}
