#include <iostream>
using namespace std;

void partition(int arr[], int l, int h, int pivot)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}

int main()
{
    int arr[] = {1, 2, 31, 18, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n - 1;
    partition(arr, l, h, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}