#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

bool comp(ll a, ll b)
{
    return a < b;
}

bool comp2(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.second > b.second;
}

int main()
{
    ll n, m, b, c;
    cin >> n >> m;

    vector<ll> cards(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    sort(cards.begin(), cards.end(), comp);

    vector<pair<ll, ll>> bj;
    for (int i = 0; i < m; i++)
    {
        cin >> b >> c;
        bj.push_back(make_pair(b, c));
    }
    sort(bj.begin(), bj.end(), comp2);

    ll count = 0; // Keep track of which card to replace
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < bj[i].first && count < n; j++)
        {
            if (bj[i].second > cards[count])
            {
                cards[count] = bj[i].second;
                count++;
            }
            else
                break;
            
        }
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += cards[i];
    }
    cout << sum;

    return 0;
}