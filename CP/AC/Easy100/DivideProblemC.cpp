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
    ll n;
    cin >> n;
    vector<ll> scores(n, 0);
    for (int i = 0; i < n;i++){
        cin >> scores[i];
    }
    sort(scores.begin(), scores.end());
    ll a = scores.size() / 2;
    ll b = a;
    a -= 1;
    cout << scores[b] - scores[a];
}