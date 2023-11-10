#include <iostream>
#include <unordered_set>
using namespace std;

bool isSum(int arr[], int sum, int n)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pre_sum == sum)
        {
            return true;
        }
        if (s.find(pre_sum - sum) != s.end())
        {
            return true;
        }

        s.insert(pre_sum);
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cin >> sum;
    int ans = isSum(arr, sum, n);
    cout << ans;
}