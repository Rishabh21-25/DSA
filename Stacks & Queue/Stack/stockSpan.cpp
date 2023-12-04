#include <iostream>
#include <Stack>
using namespace std;

// Naive Approach

void printSpan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
        {
            span++;
        }
        cout << span << " ";
    }
}

// Efficient Solution

/*
Observation
  1. If there is greater element on left side:
        span = (index of current element) - (Index of closest greater element on left side);
   2. Otherwise:
        spn = Index of curr Element + 1
*/

int main()
{
    int arr[] = {18, 12, 13, 14, 11, 16};
    printSpan(arr, 6);
    return 0;
}