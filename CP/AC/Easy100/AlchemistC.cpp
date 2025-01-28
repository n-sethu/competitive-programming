


#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;


int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double add=v[0];
    int ptr = 0;
    for (int i = 0; i < n-1;i++){
        add= (add + v[i + 1]) / 2.0;
    }
    printf("%.2f",add);
}