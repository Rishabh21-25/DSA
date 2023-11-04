
#include <stdio.h>

int getLargest(int arr[], int n)
{
    int largest = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }

    return largest;
}

int getsecondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int res = -1;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
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
    int x = getsecondLargest(arr, n);
    printf("%d", arr[x]);

    return 0;
}