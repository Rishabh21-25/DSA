#include <iostream>
using namespace std;

// int main()
// {
//     char str[] = "rish";
//     cout << sizeof(str);
//     cout << str << endl;
//     char st[] = {'r', 'i', 's'};
//     cout << st <<;
//     cout << sizeof(st);
//     return 0;
// }

int main()
{
    string str = "rishabh";
    // for (char x : str)
    // {
    //     cout << x;
    // }
    cout << str.length() << " ";
    str = str + "shkl";
    cout << str << " ";
    cout << str.substr(1, 3) << " ";
    cout << str.find("sh") << " ";
}