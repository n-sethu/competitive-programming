#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main()
{
    // perimeter = k, num houses = n
    ll k, n;
    cin >> k >> n;
    vector<ll> houses(n, 0);
    vector<ll> segments(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> houses[i];
    }

    segments[0] = k - houses[n - 1] + houses[0]; 
    for (int i = 1; i < n; i++)
    {
        segments[i] = houses[i] - houses[i - 1]; 
    }

    sort(segments.begin(), segments.end());

    ll min = 0;
    for (int i = 0; i < n - 1; i++)
    { 
        min += segments[i];
    }
    cout << min;

    return 0;
}