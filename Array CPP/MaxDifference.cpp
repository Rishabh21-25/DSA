#include <iostream>
using namespace std;

/* BRUTE FORCE APPROACH

int maxDiff(int arr[], int n)
{
    int difference = arr[1] - arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            difference = max(difference, arr[j] - arr[i]);
        }
    }
    cout << difference;
}

*/

// BETTER APPROACH

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }

    cout << res;
}

int main()
{
    int arr[] = {2, 5, 8, 6, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxDiff(arr, n);
    return 0;
}
