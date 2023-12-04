#include <iostream>
#include <stack>
using namespace std;

// void printPrev(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j;
//         for (j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > arr[i])
//             {
//                 cout << arr[j] << " ";
//                 break;
//             }
//         }
//         if (j == -1)
//         {
//             cout << -1 << " ";
//         }
//     }
// }

void printPrev(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int prevGreat = (s.empty()) ? -1 : s.top();
        cout << prevGreat << " ";
        s.push(arr[i]);
    }
}

int main()
{
    int arr[] = {20, 30, 10, 5, 15};
    printPrev(arr, 6);
    return 0;
}