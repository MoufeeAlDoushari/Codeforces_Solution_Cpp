#include<iostream>
using namespace std;
int main ()
{
    int tt,a,b,c;
    cin>>tt;
    while(tt--)
    {
        cin>>a>>b>>c;
        if(c%2==0)
        {
            if(a>b)
            {
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        else{
            if(b>a)
            {
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
    }
    return 0;
}
