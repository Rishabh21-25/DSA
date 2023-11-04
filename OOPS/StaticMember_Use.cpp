#include<iostream>
using namespace std;
#include "StaticMember.cpp"
int main()
{
    Student s1;
   // cout << s1.rollNumber << " " << s1.age << endl;
  //cout << s1.totalStudents << endl; // Compiler allows but it is logically incorrect.
   // s1.totalStudents = 22;

    Student s2;
    Student s3,s4,s5;
    cout << Student :: totalStudents << endl;

   // cout << s2.totalStudents << endl;
   // cout << Student :: totalStudents << endl;
 return 0;
}