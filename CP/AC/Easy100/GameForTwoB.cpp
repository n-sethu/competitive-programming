#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#include <random>

#define ll long long
using namespace std;

void quickSort(vector<int> &arr, int low, int high);
int partition(vector<int> &arr, int low, int high);

void quickSort(vector<int> &arr)
{
    quickSort(arr, 0, arr.size() - 1);
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);
        quickSort(arr, low, part);
        quickSort(arr, part + 1, high);
    }
}

int partition(vector<int> &arr, int low, int high)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> ran(low, high);
    int pivotIndex = ran(gen); // Random pivot index
    int pivot = arr[pivotIndex];

    int ptr1 = low - 1, ptr2 = high + 1;

    while (true)
    {
        do
        {
            ptr1++;
        } while (arr[ptr1] < pivot);

        do
        {
            ptr2--;
        } while (arr[ptr2] > pivot);

        if (ptr1 >= ptr2)
            return ptr2;

        // Swap elements at ptr1 and ptr2
        swap(arr[ptr1], arr[ptr2]);
    }
}


int main()
{
    int n;
    cin >> n;
    vector<int> cards(n, 0);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        cards[i] = k;
    }
    int a = 0, b = 0;
    quickSort(cards);
    bool alice = true;
    for (int i = n - 1; i >= 0; i--)
    {
        if (alice)
        {
            a += cards[i];
            alice = false;
        }
        else
        {
            b += cards[i];
            alice = true;
        }
    }
    cout << a - b;
    return 0;
}