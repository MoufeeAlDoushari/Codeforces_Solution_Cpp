#include<bits/stdc++.h>
using namespace std;

int main () {
   int y;
   cin>>y;
   int z=y;
   int x;
   int first,second,third,four;
   while(1) {
        x=z+1;
        four=x%10;
        x/=10;
        third=x%10;
        x/=10;
        second=x%10;
        first=x/10;

       if(first==second || first==third || first==four || second==third || second==four || third==four){
          z++;
       }
       else{
            cout<<first<<second<<third<<four<<endl;
            break;
       }

   }
   return 0;
}
