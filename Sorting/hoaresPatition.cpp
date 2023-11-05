#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {10, 2, 31, 18, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n - 1;
    int pivotInd = partition(arr, l, h);
    cout << pivotInd;
}