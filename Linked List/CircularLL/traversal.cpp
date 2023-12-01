#include <iostream>
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

Node printList(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    cout << (head->data) << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << (p->data) << " ";
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printList(head);
    return 0;
}
