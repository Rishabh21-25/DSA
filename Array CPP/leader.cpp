#include <iostream>
using namespace std;

/*

void printLeader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = false;
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}

*/

// Better Solution

void printLeader(int arr[], int n)
{
    int current_ldr = arr[n - 1];
    cout << current_ldr << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (current_ldr < arr[i])
        {
            current_ldr = arr[i];
            cout << current_ldr << " ";
        }
    }
}

int main()

{
    int arr[] = {4, 2, 6, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printLeader(arr, n);
    return 0;
}