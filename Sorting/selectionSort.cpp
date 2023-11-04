#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        swap(arr[min_ind], arr[i]);
    }
}

int main()
{
    int arr[] = {10, 22, 31, 18, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}