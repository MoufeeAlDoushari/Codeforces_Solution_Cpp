#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long total=k,ex=k;
		while(1)
		{
			total+=(ex/n);
			//cout<<total<<endl;
			ex=(ex/n)+(ex%n);
			if(ex<n)
				break;
		}
		cout<<total<<endl;
    }
}
