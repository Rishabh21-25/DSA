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

// Node *insertEnd(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     if (head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }
//     else
//     {
//         Node *curr = head;
//         while (curr->next != head)
//         {
//             curr = curr->next;
//         }
//         curr->next = temp;
//         temp->next = head;
//         return head;
//     }

// }

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return temp;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    insertEnd(head, 50);
    insertEnd(head, 60);
    printList(head);
    return 0;
}