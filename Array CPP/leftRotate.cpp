#include <iostream>
using namespace std;

/*BRUTE FORCE APPROACH



void leftRotateByOne(int arr[],int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

}

void leftRotate(int arr[],int n,int d)
{
    for (int i = 0; i < n; i++)
    {
        leftRotateByOne(arr,n);
    }

}

int main()

{
    int arr[] = {4,2,6,8,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;
    cin >> d;

    leftRotate(arr,n,d);
}

*/

/* BETTER SOLUTION

void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

int main()

{
    int arr[] = {4, 2, 6, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cin >> d;
    d = d % n;

    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

*/

// Optimal Solution

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()

{
    int arr[] = {4, 2, 6, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cin >> d;
    d = d % n;

    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
