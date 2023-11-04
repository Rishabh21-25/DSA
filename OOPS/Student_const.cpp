#include<iostream>
using namespace std;
#include "Student.cpp"
int main()
{
    Student s1;

    s1.display();

    Student s2;

    Student *s3 = new Student;

    s3 -> display();


    cout<< "Parametrized constructer" << endl;
    Student s4(10);
    s4.display();
    Student *s5 = new Student(110);
    s5 -> display();


    Student s6(22, 114);
    cout << "s6 :";
      s6.display();

      Student s7(s6);
      cout << "Student s7 :";
      s7.display();

      Student *s8 = new Student(20,2002);
      s8 -> display();
      Student s9(*s8);
      s9.display();
      


 return 0;
 
} 