#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
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