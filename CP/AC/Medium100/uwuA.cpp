#include "mheaders.h"
// #include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vlb = vector<pair<ll, bool>>;
#define pb push_back
#define mp(n, k) make_pair(n, k)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i > b; i--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    ll n = s.size() + 1;
    vector<ll> a(n, 0);

    // Forward pass: Handle '<'
    rep(i,0,n-1)
    {
        if (s[i] == '<')
        {
            a[i + 1] = a[i] + 1;
        }
    }

    // Backward pass: Handle '>'
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s[i] == '>')
        {
            a[i] = max(a[i], a[i + 1] + 1);
        }
    }

    // Compute the sum
    ll total_sum = accumulate(a.begin(), a.end(), 0LL);
    cout << total_sum << "\n";

    return 0;
}