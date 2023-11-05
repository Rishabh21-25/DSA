#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);

    return i + 1;
}

int main()
{
    int arr[] = {1, 2, 31, 18, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n - 1;
    partition(arr, l, h);
    // cout << pivotInd;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}