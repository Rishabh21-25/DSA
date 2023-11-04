#include <iostream>
using namespace std;

bool sum(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == x)
        {
            return true;
        }
        if (arr[low] + arr[high] > x)
        {
            high--;
        }
        if (arr[low] + arr[high] < x)
        {
            low++;
        }
    }

    return false;
}

int main()
{
    int arr[] = {1, 6, 3, 8, 9, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sum(arr, n, 17);
}