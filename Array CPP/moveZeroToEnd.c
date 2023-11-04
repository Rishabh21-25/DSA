#include <stdio.h>

void removeZeroToEnd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; i < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

int main()
{
    int arr[] = {3, 4, 0, 1, 0, 0, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeZeroToEnd(arr, n);
}