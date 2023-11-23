#include <iostream>
#include <string>
#include <algorithm>
#include <limits.h>
using namespace std;

const int CHAR = 256;
/*

int nonRepeating(string &s1)
{
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (count[s1[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

*/
int nonRepeating(string &s1)
{
    int fI[CHAR];
    fill(fI, fI + CHAR, -1);
    for (int i = 0; i < s1.length(); i++)
    {
        if (fI[s1[i]] == -1)
        {
            fI[s1[i]] = i;
        }
        else
        {
            fI[s1[i]] = -2;
        }
    }

    int res = INT_MAX;
    for (int i = 0; i < CHAR; i++)
    {
        if (fI[i] >= 0)
        {
            res = min(res, fI[i]);
        }
    }
    return (res == INT_MAX) ? -1 : res;
}

int main()
{
    string s1 = "abdsbad";
    cout << nonRepeating(s1);
    return 0;
}