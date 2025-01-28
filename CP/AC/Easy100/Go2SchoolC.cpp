#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;
using ull = unsigned long long;
bool comp2(pair<ll,ll> a, pair<ll,ll> b){
    return a.first < b.first;
}

int main()
{
    //first is num students in class, second is student number
    ll n;
    cin >> n;
    vector<pair<ll,ll>> students(n);
    for (int i = 0; i < n;i++){
        cin >> students[i].first;
        students[i].second = i + 1;
    }
    sort(students.begin(), students.end(), comp2);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].second<<" ";
    }
}