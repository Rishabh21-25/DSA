#include<iostream>
using namespace std;
#include "Fraction_class.cpp"
int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);

   /* f1.add(f2);

     f1.print();
     f2.print();
     */
   Fraction const f3;

   cout << f3.getNumerator() << "  " << f3.getDenominator() << endl;
     
 return 0;
}     