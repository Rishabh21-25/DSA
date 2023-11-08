#include <iostream>
#include <unordered_set>
using namespace std;

int findUnion(int arr1[], int arr2[], int n1, int n2)
{
    unordered_set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    int res = 0;
    for (int j = 0; j < n2; j++)
    {
        s.insert(arr2[j]);
    }

    return s.size();
}

int main()
{
    int arr1[] = {5, 10, 2, 15, 2};
    int arr2[] = {2, 5, 9, 17};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int res = findUnion(arr1, arr2, n1, n2);
    cout << res;
}
