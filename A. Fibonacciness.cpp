#include <iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        int i=0;
        for( i=0;i<4;i++){
            cin>>arr[i];
        }
        int count=0;


        int first=arr[0]+arr[1];
        if(arr[0]+arr[1]==first){
            count++;
        }
        if(arr[1]+first==arr[2]){
            count++;
        }
        if(arr[2]+first==arr[3]){
            count++;
        }

        int count1=0;
        int last=arr[3]-arr[2];

        if(arr[0]+arr[1]==last){
            count1++;
        }
        if(arr[1]+last==arr[2]){
            count1++;
        }
        if(arr[2]+last==arr[3]){
            count1++;
        }
        cout<<max(count,count1)<<endl;


    }
    return 0;
}
