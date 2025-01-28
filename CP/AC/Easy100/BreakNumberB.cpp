#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#include <cmath>

#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c1 = 1;
    while (c1 <=n){
        c1 *= 2;
    }
    c1 /= 2;
    cout << c1;
}