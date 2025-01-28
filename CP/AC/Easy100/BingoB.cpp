#include <iostream>
#include <cmath>
#include <utility>
#include <unordered_map>
#include <vector>

#define ll long long
using namespace std;

bool checkRow(vector<vector<pair<int, bool>>> bingo)
{
    for (int i = 0; i < 3; i++)
    {
        if (bingo[i][0].second == true && bingo[i][1].second == true && bingo[i][2].second == true)
            return true;
    }
    return false;
}
bool checkCol(vector<vector<pair<int, bool>>> bingo)
{
    for (int i = 0; i < 3; i++)
    {
        if (bingo[0][i].second == true && bingo[1][i].second == true && bingo[2][i].second == true)
            return true;
    }
    return false;
}

bool checkDiag(vector<vector<pair<int, bool>>> bingo)
{

        if (bingo[0][0].second == true && bingo[1][1].second == true && bingo[2][2].second == true)
            return true;
        if (bingo[0][1].second == true && bingo[1][1].second == true && bingo[2][0].second == true)
            return true;

        return false;
}
int main()
{

    vector<vector<pair<int, bool>>> bingo(3, vector<pair<int, bool>>(3, make_pair(0, false)));
    unordered_map<int, int> mp;
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> bingo[i][j].first;
            mp[bingo[i][j].first] = k;
            k++;
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int f;
        cin >> f;
        if (mp.contains(f))
        {
            if (mp[f] < 3)
                bingo[0][mp[f]].second = true;
            // working on getting input 1-9 mapped to the right bingo part
            else if (mp[f] < 6)
                bingo[1][mp[f] - 3].second = true;
            else if (mp[f] < 9)
                bingo[2][mp[f] - 6].second = true;
        }
    }
    if(checkCol(bingo)||checkRow(bingo)||checkDiag(bingo))
        cout << "Yes";
    else
        cout << "No";
}