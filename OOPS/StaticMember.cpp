#include<iostream>
using namespace std;
class Student
{
   public :
   int rollNumber;
   int age;

   // Total number of students
   static int totalStudents;

   Student()
   {
       totalStudents++;
   } 

};

int Student :: totalStudents = 0; //initialize static data member
 