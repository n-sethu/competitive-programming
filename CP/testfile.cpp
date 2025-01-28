#include "headers.h"
using namespace std;

int main()
{
    cout << "tester ";
    vector<int> v(5);
    v[0] = 10;
    v[2] = 9;
    sort(v.begin(),v.end());
    for (int i = 0; i < 5;i++){
        cout << v[i] << " ";
    }
    return 0;
}