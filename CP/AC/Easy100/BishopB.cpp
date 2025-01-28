#include <iostream>
#include <cmath>

#define ll long long
using namespace std;

int main()
{
    ll r, c;
    cin >> r >> c;
    ll area = r * c, count = 0;
    if (r == 1 || c == 1)
        count = 1;
    else
        count = (area + 1) / 2;
    cout << count;
}
