#include <iostream>
#include <unordered_set>
using namespace std;

int intersection(int arr1[], int arr2[], int n1, int n2)
{
    unordered_set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    int res = 0;
    for (int j = 0; j < n2; j++)
    {
        if (s.find(arr2[j]) != s.end())
        {
            res++;
            s.erase(arr2[j]);
        }
    }

    return res;
}

int main()
{
    int arr1[] = {10, 15, 5, 10, 2, 15, 6};
    int arr2[] = {10, 2, 5, 9, 17};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int res = intersection(arr1, arr2, n1, n2);
    cout << res;
}
