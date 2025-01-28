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

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int m = c % b;
    rep(i,1,b+1){
        if(((i*a)%b)==m){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}