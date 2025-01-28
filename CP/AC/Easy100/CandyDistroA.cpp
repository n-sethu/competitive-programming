#ifndef BITS_STDC_H
#define BITS_STDC_H 1

// Compiler optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

// C++ Standard Library headers
#include <bits/stdc++.h> // Use this for most contests unless prohibited
#include <iostream>
#include <chrono>
#include <random>
#include <iomanip>
#include <cmath>
#include <functional>
#include <queue>
#include <stack>
#include <map>
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

int main()
{

    ll n, x;
    cin >> n >> x;

    vl sweets(n, 0);
    rep(i, 0, n)
    {
        cin >> sweets[i];
    }

    ll total = accumulate(sweets.begin(), sweets.end(), 0LL);
    if (total < x)
    {
        cout << n-1;
        return 0;
    }

    sort(all(sweets));
    ll count = 0;
    trav(sweet,sweets)
    {
        if (x < sweet)
            break;
        x -= sweet;
        count++;
    }

    cout << count;
    return 0;
}