#include "mheaders.h"
// #include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
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

    s.pop_back();
    s.pop_back();

    string one = s.substr(0, s.size() / 2); 
    string two = s.substr(s.size() / 2);    

    while (one != two)
    {
        s.pop_back();
        s.pop_back();
        one = s.substr(0, s.size() / 2);
        two = s.substr(s.size() / 2);
    }

    cout << s.size();
}