#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1])
            return false;

    return true;
}

int main()
{
    int arr[5] = {1, 4, 5, 7, 2};
    int n = 5;
    printf("%d", isSorted(arr, n));
    return 0;
}