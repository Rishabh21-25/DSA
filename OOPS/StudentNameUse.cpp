#include<iostream>
using namespace std;
#include "StudentName.cpp"
int main()
{
    char name[] =  "abcd";
    Student s1(20,name);
    s1.display();
    name[3] = 'e';
    Student s2(24,name);
    s2.display(); 


 return 0;
}