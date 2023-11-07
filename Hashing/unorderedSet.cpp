#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(11);
    s.insert(19);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    cout << s.size() << " ";

    if (s.find(10) == s.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    /*   ERASE FUNCTION

       s.erase(10);
    cout << s.size() << " ";

    auto it = s.find(19);
    s.erase(it);
    cout << s.size() << " ";

    */

    cout << endl;
    s.clear();
    cout << s.size() << " ";

    return 0;
}