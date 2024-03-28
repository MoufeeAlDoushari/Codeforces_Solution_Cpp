#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        string str;
        cin>>str;
        int h1 = (int)str[0] - '0';
        int h2 = (int)str[1] - '0';
        int hh = h1 * 10 + h2;
        string Meridien[2];
        if (hh < 12)
        {
            Meridien[0] = 'A';
            Meridien[1] = 'M';
        }
        else
        {
            Meridien[0] = 'P';
            Meridien[1] = 'M';
        }
        hh %= 12;

        if (hh == 0)
        {
            cout<<"12";

            for (int j = 2; j < 5; ++j)
            {
                cout<<str[j];
            }
        }
        else if(hh==10||hh==11)
        {
            cout<<hh;
            for (int j = 2; j < 5; ++j)
            {
                cout<<str[j];
            }
        }
        else
        {
            cout<<"0"<<hh;
            for (int j = 2; j < 5; ++j)
            {
                cout<<str[j];
            }
        }
        cout<<" "<<Meridien[0]<<Meridien[1]<<endl;

    }
}

