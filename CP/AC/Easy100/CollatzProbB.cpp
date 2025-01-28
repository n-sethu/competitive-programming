#include "eheaders.h"

using namespace std;
using ll = long long;
int main()
{
    cin.tie(NULL);
    ll s;
    cin >> s;

    map<ll, int> nums; 
    nums[s] = 1;

    ll count = 2;
    while (true)
    {
        s = (s % 2 == 0) ? (s / 2) : (3 * s + 1);

        if (nums.contains(s))
            break;

        nums[s] = count; 
        count++;
    }

    cout << count << '\n';
    return 0;
}