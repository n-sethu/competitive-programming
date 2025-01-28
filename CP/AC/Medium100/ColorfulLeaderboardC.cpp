#ifndef BITS_STDC_H
#define BITS_STDC_H 1

// Compiler optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

// C++ Standard Library headers
// #include <bits/stdc++.h> // Use this for most contests unless prohibited
#include <iostream>
#include <algorithm>
#include <bitset>
#include <chrono>
#include <random>
#include <iomanip>
#include <cmath>
#include <functional>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <map>
#include <numeric>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <utility>

// Type definitions
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vb = vector<bool>;


// I/O Optimization
static struct FastIO
{
    FastIO()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        std::cout << std::fixed << std::setprecision(20);
    }
} fast_io;

// Constants
constexpr ll INF = 1e18;
constexpr int inf = 1e9;
constexpr int MOD = 1000000007;
constexpr int dx[] = {-1, 0, 1, 0};
constexpr int dy[] = {0, 1, 0, -1};

// Competitive programming macros
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define rrep(j, a, b) for (int j = a; j > b; j--)
#define trav(a, x) for (auto &a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define F first
#define S second

// Utility functions
namespace cp
{
    template <typename T>
    T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

    template <typename T>
    T lcm(T a, T b) { return a * (b / gcd(a, b)); }

    template <typename T>
    T modpow(T base, T exp, T modulus)
    {
        base %= modulus;
        T result = 1;
        while (exp > 0)
        {
            if (exp & 1)
                result = (result * base) % modulus;
            base = (base * base) % modulus;
            exp >>= 1;
        }
        return result;
    }
}

#endif // BITS_STDC_H
int getInd(int k){
  if(k<=399)
      return 0;
  if (k <= 799)
      return 1;
  if (k <= 1199)
      return 2;
    if(k<=1599)
        return 3;
    if(k<=1999)
        return 4;
    if(k<=2399)
        return 5;
    if(k<=2799)
        return 6;
    if(k<=3199)
        return 7;
    return 8;
}
int main(){
    int n, min{}, max{};
    cin >> n;
    vb color(8, false);
    vl scores(n, 0);
    rep(i, 0, n)
    {
        cin >> scores[i];
    }
    sort(all(scores));

    rep(i, 0, n)
    {
        int val = getInd(scores[i]);
        if (val == 8 && find(color.begin(),color.end(), true) != color.end())
        {
            max++;
        }
        else if(val==8){
            min = 1;
            max++;
        }
        else if(!color[val]){
            min++;
            max++;
            color[val] = true;
        }
    }
    cout << min << " " << max;
}