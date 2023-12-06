#include <iostream>
#include <stack>
using namespace std;

// prints in revese order
void nextGreater(int arr[], int n)
{
    stack<int> s;
    cout << -1 << " ";
    s.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int nextGtr = (s.empty()) ? (-1) : (s.top());
        cout << nextGtr << " ";
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    nextGreater(arr, 8);
    return 0;
}
