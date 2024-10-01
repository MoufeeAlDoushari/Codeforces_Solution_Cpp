#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p;
    cin >> n >> k;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p + k <= 5){
             count++;
        }
    }
    cout << count / 3 << endl;
    return 0;
}
