#include <iostream>
using namespace std;

/* ........NAIVE SOLUTION..........


int countInversion(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                res++;
            }
        }
    }

    return res;
}

*/

//.........EFFICIENT SOLUTION.........//

int countMerge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }

    int res = 0, i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            res = res + (n1 - i);
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }

    return res;
}

int countInversion(int arr[], int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        res += countInversion(arr, l, m);
        res += countInversion(arr, m + 1, r);
        res += countMerge(arr, l, m, r);
    }
    return res;
}

int main()
{
    int arr[] = {5, 6, 1, 8, 9, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = n - 1;
    // int inversion = countInversion(arr, n);

    int inversion = countInversion(arr, l, r);
    cout << inversion;
}