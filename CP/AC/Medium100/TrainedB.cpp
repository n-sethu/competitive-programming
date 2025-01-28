#include "mheaders.h"

using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vb = vector<bool>;
using vbp = vector<pair<bool, bool>>;
#define rep(i, a, b) for (int i = a; i < b; i++)

int main(){
    ll n;
    cin >> n;
    vl v (n, 0);
    vb b(n);
    b[0]= true;
    ll f;
    rep(i, 0, n)
    {
        cin >> f;
        f--;
        v[i] = f;
    }
    ll ptr = v[0],count=0;
    while (!b[1])
    {
        if(b[ptr]){
            cout << -1;
            return 0;
        }
        b[ptr] = true;
        ptr = v[ptr];
        count++;
    }
    cout << count;
}
