#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

bool isSubSeqn(string s1, string s2, int n, int m)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }
    return (j == m);
}

int main()
{
    string s1 = "rishabh";
    string s2 = "rbh";

    cout << isSubSeqn(s1, s2, 7, 3);
}