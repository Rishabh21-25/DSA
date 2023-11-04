#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest = 0, res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }

    return res;
}

int main()
{

    int arr[5] = {2, 7, 1, 30, 80};
    int n = 5;
    int x = secondLargest(arr, n);
    printf("%d", arr[x]);
    return 0;
}