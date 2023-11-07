#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["ris"] = 21;
    m["rol"] = 43;
    m.insert({"courses", 2});

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    // cout << endl;

    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (it->first) << " " << (it->second) << endl;
    // }

    if (m.count("ris") > 0)
        cout << "Found";
    else
        cout << "Not Found";

    cout << endl;
    cout << m.size() << " ";
    m.erase("rol");
    m.erase(m.begin());

    cout << m.size() << " ";

    return 0;
}