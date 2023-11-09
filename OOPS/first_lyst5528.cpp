#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
int main()
{
    int x,y,z;
    cout<<"Enter two numbers";
    cin>>x>>y;
    cout<<"Sum is "<<add(x,y);
    cout<<endl<<"Enter three numbers";
    cin>>x>>y>>z;   
    cout<<"Sum is "<<add(x,y,z);
    cout<<endl;
    return 0;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int add(int a, int b)
{
    return a+b;
}

