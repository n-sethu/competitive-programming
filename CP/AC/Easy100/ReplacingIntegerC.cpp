#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){
    ll n, k;
    cin >> n >> k;
    if(k==1){
        cout << 0;
        return 0;
    }
    if(n>2*k)
        n = n % k;

    n = min(n, abs(n - k));
    n = min(n, abs(n - k));
    cout << n;
}