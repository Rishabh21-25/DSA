#include <iostream>
#include <unordered_set>
using namespace std;

bool isPair(int arr[], int n, int sum)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
        {
            return true;
        }

        s.insert(arr[i]);
    }

    return false;
}

int main()
{
    int arr[] = {10, 15, 5, 10, 2, 15, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cin >> sum;
    int ans = isPair(arr, n, sum);
    cout << ans;
}
