#include <iostream>
using namespace std;

void Merge(int arr[], int array[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr[i] < array[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else
        {
            cout << array[j] << " ";
            j++;
        }
    }

    while (i < n1)
    {
        cout << arr[i] << " ";
        i++;
    }
    while (j < n2)
    {
        cout << array[j];
        j++;
    }
}

int main()
{
    int arr[] = {1, 3, 6, 9, 11};
    int array[] = {5, 8, 9, 10};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(array) / sizeof(array[0]);

    Merge(arr, array, n1, n2);
}