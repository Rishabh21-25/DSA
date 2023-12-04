#include <iostream>
#include <limits.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct myStack
{
    Node *head;
    int size;
    myStack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }

        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }

    int size()
    {
        return size;
    }

    bool isEmpty()
    {
        return (head == NULL);
    }

    int peek()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        return head->data;
    }
};
