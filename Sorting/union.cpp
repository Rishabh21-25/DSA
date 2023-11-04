//.....WORKS FOR SORTED ARRAY.......//

#include <iostream>
using namespace std;

int printUnion(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }

        if (j > 0 && arr1[j] == arr1[j - 1])
        {
            j++;
            continue;
        }
        if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }

        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    while (i < n1)
    {
        if (i > 0 && arr1[i] != arr1[i - 1])
        {
            cout << arr1[i] << " ";
            i++;
        }
    }

    while (j < n2)
    {
        if (j > 0 && arr2[i] != arr2[i - 1])
        {
            cout << arr2[j] << " ";
            j++;
        }
    }
}

int main()
{
    int arr1[] = {3, 5, 7, 9, 11};
    int arr2[] = {3, 5, 8, 11, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, arr2, n1, n2);
}