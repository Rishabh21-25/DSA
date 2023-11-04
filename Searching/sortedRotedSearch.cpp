#include <iostream>
using namespace std;

int search(int arr[], int x, int n)
{
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;
    if (x == arr[mid])
    {
        return mid;
    }
    if (arr[low] < arr[mid])
    {
        if (x >= arr[low] && x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    else
    {
        if (x > arr[mid] && x <= arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int indx = search(arr, x, n);
    cout << indx;
}