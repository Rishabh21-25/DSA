#include<iostream>
using namespace std;
#include<Stack>

int main() {

    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);

    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;

    cout << s1.size() << endl;
    cout << s1.empty() <<endl;
}