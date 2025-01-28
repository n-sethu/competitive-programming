#ifndef BITS_STDC_H
#define BITS_STDC_H 1

// Compiler optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

// C++ Standard Library headers
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <concepts>
#include <condition_variable>
#include <deque>
#include <exception>
#include <execution>
#include <filesystem>
#include <format>
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <numbers>
#include <numeric>
#include <optional>
#include <ostream>
#include <queue>
#include <random>
#include <ranges>
#include <regex>
#include <scoped_allocator>
#include <set>
#include <source_location>
#include <span>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <string_view>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>
#include <vector>

// I/O Optimization
static struct FastIO {
    FastIO() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        std::cout << std::fixed << std::setprecision(20);
    }
} fast_io;

// Type definitions
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using vvi = std::vector<vi>;
using vvll = std::vector<vll>;

// Constants
constexpr ll INF = 1e18;
constexpr int inf = 1e9;
constexpr double EPS = 1e-9;
constexpr double PI = 3.14159265358979323846;
constexpr int MOD = 1000000007;
constexpr int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
constexpr int dy[] = {0, 1, 0, -1, -1, 1, -1, 1};

// Debug macros
#ifdef LOCAL
    #define debug(x) std::cerr << #x << " = " << x << std::endl
    #define debugv(v) std::cerr<<#v<<" = ";for(auto &i:v)std::cerr<<i<<' ';std::cerr<<std::endl
    #define debugm(m) std::cerr<<#m<<":"<<std::endl;for(auto &i:m){for(auto &j:i)std::cerr<<j<<' ';std::cerr<<std::endl;}
#else
    #define debug(x)
    #define debugv(v)
    #define debugm(m)
#endif

// Competitive programming macros
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second

// Modern C++23 features
template<typename T>
using min_heap = std::priority_queue<T, std::vector<T>, std::greater<T>>;
template<typename T>
using max_heap = std::priority_queue<T>;

namespace cp {
    template<typename T>
    T ceil(T a, T b) { return (a + b - 1) / b; }
    
    template<typename T>
    T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
    
    template<typename T>
    T lcm(T a, T b) { return a * (b / gcd(a, b)); }
    
    template<typename T>
    bool isPowerOfTwo(T x) { return x && (!(x & (x - 1))); }
    
    template<typename T>
    T modpow(T base, T exp, T modulus) {
        base %= modulus;
        T result = 1;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % modulus;
            base = (base * base) % modulus;
            exp >>= 1;
        }
        return result;
    }
}

#endif // BITS_STDC_H

