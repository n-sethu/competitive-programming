#include <iostream>
#include <cmath>
#include <utility>
#include <string>
#include <cmath>

#define ll long long
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string as = to_string(a), bs = to_string(b);
    string c = as + bs;
    ll n = stoll(c);
    ll k = floor(sqrt(n));
    if (k * k == n)
        cout << "Yes";
    else
        cout << "No";
}