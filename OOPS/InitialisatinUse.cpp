#include<iostream>
using namespace std;
#include "Initialisation.cpp"
int main()
{
    Student s1(101);
    s1.age = 20;
    //s1.rollNumber = 101;
    cout << s1.rollNumber  << endl;
    cout << s1.age  << endl;
 return 0;
}