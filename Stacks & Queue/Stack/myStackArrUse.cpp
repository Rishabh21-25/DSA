#include <iostream>
using namespace std;
#include "myStackArr.cpp"

int main()
{
    myStack s(4);
    s.push(5);
    s.push(10);
    s.push(12);
    s.push(16);
    cout << s.pop() << endl;

    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
