#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <string.h>
using namespace std;

void reverse(char s1[], int low, int high)
{
    while (low <= high)
    {
        swap(s1[low], s1[high]);
        low++;
        high--;
    }
}

void reverseWords(char s1[], int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (s1[end] == ' ')
        {
            reverse(s1, start, end);
            start = end + 1;
        }
    }

    reverse(s1, start, n - 1);
    reverse(s1, 0, n - 1);
}

int main()
{
    string s1 = "Welcome to programming ";
    int n = s1.length();
    char s1Arr[n + 1];
    strcpy(s1Arr, s1.c_str());
    reverseWords(s1Arr, n);
    cout << s1Arr;
    return 0;
}