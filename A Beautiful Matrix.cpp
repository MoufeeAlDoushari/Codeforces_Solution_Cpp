#include<bits/stdc++.h>
using namespace std ;

int main () {
    int arr[5][5];
    int c;
    int sign=-1;
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin >> arr[i][j] ;
        }
    }
    if (arr[0][0]==1 || arr[4][4]==1 ){
        cout << "4" << endl;
        return 0;
    }

    else if (arr[1][0]==1 || arr[3][4]==1 || arr[4][3]==1 ){
        cout << "3" << endl;
        return 0;
    }

    else if ( arr[1][1]==1 || arr[3][3]==1 ){
        cout << "2" << endl;
        return 0;
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {

            if(arr[i][j]==1){
                c=j-i;
            }
        }
    }
    if (c>=0) {
        cout << c << endl;
    }
    else {
        cout << c*sign << endl;
    }
    return 0;

}
