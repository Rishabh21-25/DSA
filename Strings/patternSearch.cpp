#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void patSearch(string &s1, string &pat)
{
    int n = s1.length();
    int m = pat.length();

    for (int i = 0; i < n - m; i++)
    {
        int j;
        for (int j = 0; j < m; j++)
        {
            if (pat[j] != s1[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    string s1 = "ababababcd";
    string pat = "abab";
    patSearch(s1, pat);
    return 0;
}