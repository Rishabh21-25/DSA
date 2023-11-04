#include<iostream>
using namespace std;
class Student {
    public :

    int rollNumber;

    private : 
    int age;

    public : 

    Student()
    {
        cout << "Constructer called ! "<< endl;
    }
    Student(int r)
    {
        cout << "Constructer 2 called !"<< endl;
        rollNumber = r;
    }

    Student(int a, int r)
    {
        cout << "Constructer 3 called !"<< endl;
        age = a;
        rollNumber = r;
    }

    void display()
    {
       cout << age << " " << rollNumber << endl; 

    }
     int getAge()
     {
         return age;
     }
     void setAge(int a)
     {
       
         age = a;
    }

        
    
};
