#include <iostream>
using namespace std;

// BRUTE FORCE

/*
int maxCons(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; i < n; j++)
        {
            if (arr[j] == 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        res = max(res, count);
    }

    return res;
}
*/

//  BETTER APPROACH

int maxConsc(int arr[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, 0, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = maxConsc(arr, n);
    cout << ans;
    return 0;
}