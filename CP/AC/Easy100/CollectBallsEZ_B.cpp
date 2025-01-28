#include <iostream>
#include <utility>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> balls;
    balls.resize(n);
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> balls[i].first;
        balls[i].second = i;
        ll a = 2 * balls[i].first;
        ll b = 2 * (abs(k - balls[i].first));
        total += min(a, b);
    }
    cout << total;
}
