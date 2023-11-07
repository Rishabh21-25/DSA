#include <iostream>
#include <unordered_set>
using namespace std;

/*.....Brute Force Solution............

int countDistinct(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            count++;
        }
    }
    return count;
}

*/

/*............Efficient Solution................

int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    return s.size();
}

*/

//.......... Optimal Solution..............

int countDistinct(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    return s.size();
}

int main()
{
    int arr[] = {1, 5, 2, 9, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = countDistinct(arr, n);
    cout << ans;
    return 0;
}