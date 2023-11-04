#include <iostream>
using namespace std;

/*

// BRUTE FORCE APPROACH

int maxProfit(int arr[], int start, int end)
{
    if (end <= start)
    {
        return 0;
    }

    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int curr_profit = arr[j] - arr[i] + maxProfit(arr, start, i - 1) + maxProfit(arr, j + 1, end);

                profit = max(profit, curr_profit);
            }
        }
    }

    return profit;
}

*/

// BETTER APPROACH

int maxProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }

    return profit;
}

int main()
{
    int arr[] = {1, 5, 3, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    int res = maxProfit(arr, n);
    cout << res;
    return 0;
}