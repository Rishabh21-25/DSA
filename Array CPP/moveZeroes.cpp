#include <iostream>
using namespace std;

void moveZero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 0, 4, 0, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZero(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
