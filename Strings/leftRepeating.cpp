#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int CHAR = 256;
int leftRepeating(string &s1)
{
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (count[s1[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s1 = "abbcd";
    cout << leftRepeating(s1);
    return 0;
}