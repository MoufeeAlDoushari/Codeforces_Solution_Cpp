#include <bits/stdc++.h>
using namespace std;

int main() {
 	int n;
	cin>>n;
	int arr[n];
	int m=0;
	long long answer=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		m=max(arr[i],m);
	}
    for(int i=0;i<n;i++){
        answer+=m-arr[i];
    }
    cout<<answer<<endl;
	return 0;
}
