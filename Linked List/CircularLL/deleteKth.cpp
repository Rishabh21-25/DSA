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

Node *deleteKth(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    Node *curr = head;
    for (int i = 0; i < k - 2; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

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
    head->next->next->next = head;
    deleteKth(head, 2);
    printList(head);
    return 0;
}