#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1 = "ababababcd";
    string pat = "abab";
    patSearch(s1, pat);
    return 0;
}