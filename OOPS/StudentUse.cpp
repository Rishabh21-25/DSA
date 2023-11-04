#include<iostream>
using namespace std;
#include "Student.cpp"
int main()
{
    //create object statically
    Student s1;
    Student s2;
   // s1.age = 24;  
    s1.rollNumber = 101;
    cout << "S1 age : " <<s1.getAge() << endl;
    cout << "S1 rollNumber : " << s1.rollNumber << endl;
    s1.display();

    //s2.age == 30;

    // Create object dynamically
    Student *s6 = new Student;
    //(*s6).age = 24;
    (*s6).rollNumber = 104;

   // s6 -> age = 23;
    s6 -> rollNumber = 104; 
    cout << "S6 age : " << s6 -> getAge() << endl;
    s6 -> display();
    



 return 0;
}