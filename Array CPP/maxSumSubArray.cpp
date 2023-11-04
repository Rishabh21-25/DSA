#include <iostream>
using namespace std;

/*    BRUTE FORCE

int maxSubArray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}
*/

//   EFFICIENT APPROACH
int maxSubArray(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = maxSubArray(arr, n);
    cout << ans;
    return 0;
}