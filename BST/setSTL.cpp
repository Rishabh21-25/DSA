#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    // set<int, greater<int>> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(2);

    // for (int x : s)
    // {
    //     cout << x << " ";
    // }

    // auto it = s.find(15);
    // if (it == s.end())
    // {
    //     cout << "Not found";
    // }
    // else
    // {
    //     cout << "Found";
    // }

    // s.clear();
    // cout << s.size() << " ";

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }

    // if (s.count(15))
    // {
    //     cout << "Found";
    // }
    // else
    // {
    //     cout << "Not found";
    // }

    // s.erase(10);
    // for (int x : s)
    // {
    //     cout << x << " ";
    // }

    auto it = s.lower_bound(8);
    if (it != s.end())
    {
        cout << (*it) << " ";
    }

    else
    {
        cout << "Given element is greater than largest present";
    }

    return 0;
}