#include<iostream>
using namespace std;
#include "PairClass.cpp"

int main() {

    Pair<Pair<int, int>, int> p2;
    p2.setY(10);
    Pair<int, int> p4;
    p4.setX(15);
    p4.setY(16);

    p2.setX(p4);

    cout<< p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;


    // Pair<int> p1;
    // p1.setX(10);
    // p1.setY(20);

    // cout<< p1.getX() << " " << p1.getY() << endl;

    // Pair<double> p2;

    // p2.setX(33.33);
    // p2.setY(9.999);

    // cout<< p2.getX() << " " << p2.getY() << endl;

}