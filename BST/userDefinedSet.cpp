#include <iostream>
using namespace std;

struct Test
{
    int x;
    bool operator<(const Test &t) const
    {
        return (this->x < t.x);
    }
};

#include <set>

int main()
{
    std::set<Test> s;
    s.insert({5});
    s.insert({20});
    s.insert({10});
    s.insert({15});
    for (Test t : s)
    {
        cout << t.x << " ";
    }
    return 0;
}
