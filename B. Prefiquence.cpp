#include <bits/stdc++.h>
using namespace std;

int maxLength(string a, string b) {
  int n= a.size();
  int m= b.size();
  int i=0,j=0,k=0;

  while (i<n && j<m) {
    if (a[i] == b[j]) {
      i++;
      j++;
      k=max(k,i);
    }
    else {
      j++;
    }
  }
  return k;
}

int main() {
  int t;
  cin>>t;

  while (t--) {
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int k = maxLength(a,b);
    cout<<k<<endl;
  }
  return 0;
}
