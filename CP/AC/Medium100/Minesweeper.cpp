#ifndef BITS_STDC_H
#define BITS_STDC_H 1

// Compiler optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

// C++ Standard Library headers
// #include <bits/stdc++.h> // Use this for most contests unless prohibited
#include <iostream>
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

bool isVal(int i, int j, int h, int w)
{
    return (i >= 0 && i < h) && (j >= 0 && j < w);
}

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<pair<char, bool>>> bombs(h);
    string s;
    bombs.resize(h, vector<pair<char, bool>>(w));
    rep(i, 0, h)
    {
        cin >> s;
        rep(j, 0, w)
        {
            if (s[j] == '#')
                bombs[i].pb(mp('#', true));
            else
                bombs[i].pb(mp('.', false));
        }
    }
    string acc = "";
    int count{};
    rep(i, 0, h)
    {
        rep(j, 0, w)
        {
            if (bombs[i][j].S)
            {
                acc += "#";
                continue;
            }
            count = isVal(i - 1, j, h, w) && bombs.at(i - 1).at(j).S ? count + 1 : count;
            count = isVal(i - 1, j - 1, h, w) && bombs.at(i - 1).at(j - 1).S ? count + 1 : count;
            count = isVal(i - 1, j + 1, h, w) && bombs.at(i - 1).at(j + 1).S ? count + 1 : count;
            count = isVal(i, j - 1, h, w) && bombs.at(i).at(j - 1).S ? count + 1 : count;
            count = isVal(i, j + 1, h, w) && bombs.at(i).at(j + 1).S ? count + 1 : count;
            count = isVal(i + 1, j, h, w) && bombs.at(i + 1).at(j).S ? count + 1 : count;
            count = isVal(i + 1, j - 1, h, w) && bombs.at(i + 1).at(j - 1).S ? count + 1 : count;
            count = isVal(i + 1, j + 1, h, w) && bombs.at(i + 1).at(j + 1).S ? count + 1 : count;
            acc += to_string(count);
            count = 0;
        }
        if(i!=h-1)
            acc += "\n";
    }
    cout << acc;
}