#include "mheaders.h"
// #include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
#define rep(i, a, b) for (ll i = a; i < b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll cw = 0, n = s.length(),count=0,j=0;
    rep(i, 0, n)
    {
       if(s[i]=='W'){
           count += i - j;
           j++;
       }
    }
    cout << count;
    //Had to look at editorial for hint
    //Got TLE for O(n^2) solution this is O(n) solution
}