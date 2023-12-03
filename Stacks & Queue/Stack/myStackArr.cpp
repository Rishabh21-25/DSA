#include <climits>
#include <iostream>
using namespace std;

struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = 1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack is full !";
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
        }
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};
