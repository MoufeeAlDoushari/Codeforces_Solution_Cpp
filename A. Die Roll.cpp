#include <iostream>
#include <string>

using namespace std;

int main()
{
    int y,w;
    cin >> y >> w;

    string p[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int m = max(y,w);
    cout << p[m] << endl;
    return 0;
}
