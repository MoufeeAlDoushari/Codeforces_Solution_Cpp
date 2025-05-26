#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int d;
        int i=0;
        int j=n-1;
        int count1=0;
        int count2=0;
        while(a[i]%2!=a[j]%2) {
            i++;
            count1++;
        }
        i=0;
        while(a[i]%2!=a[j]%2) {
            j--;
            count2++;
        }
        cout << min(count1,count2) << endl;
    }
    return 0;
}
