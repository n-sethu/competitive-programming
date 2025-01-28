#include "eheaders.h"

using namespace std;
using ll = long long;
bool isPrime(ll x){
    for (ll i = 2,n=sqrt(x); i < n;i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int main(){
    ll n;
    cin >> n;
    if(n==2){
        cout << 2;
        return 0;
    }
    
    ll prime = n;
    if ((prime & 1) == 0)
        prime++;
    while(true){
        if(isPrime(prime))
            break;
        prime += 2;
    }
    cout << prime;
}