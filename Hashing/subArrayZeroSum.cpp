#include <iostream>
#include <unordered_set>
using namespace std;

bool sumZero(int arr[], int n)
{
    unordered_set<int> s;
    int prev_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prev_sum += arr[i];
        if (s.find(prev_sum) != s.end())
        {
            return true;
        }
        if (prev_sum == 0)
        {
            return true;
        }

        s.insert(prev_sum);
    }

    return false;
}

int main()
{
    int arr[] = {10, -11, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = sumZero(arr, n);
    cout << ans;
}
