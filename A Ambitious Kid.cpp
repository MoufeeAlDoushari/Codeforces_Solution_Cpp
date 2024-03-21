#include<bits/stdc++.h>
using namespace std;

int findclosesttozero(int arr[],int s) {
    int closest=arr[0];
    for(int i=1;i<s;i++) {
        if(abs(arr[i]) < abs(closest)) {
            closest=arr[i];
        }
    }
    return closest;
}


int main ()
{
    int N;
    cin>>N;
    int arr[N];
    int sign=-1;
    for (int i=0; i<N; i++)
    {
        cin>>arr[i];
        if(arr[i]==0) {
            cout<<"0"<<endl;
            return 0;
        }
    }
    int s=sizeof(arr)/sizeof(arr[0]);
    int closest= findclosesttozero(arr,s);

    if(closest>0){
        cout<<closest<<endl;
    }
    else{
        cout<< closest*sign << endl;
    }
    return 0;
}

