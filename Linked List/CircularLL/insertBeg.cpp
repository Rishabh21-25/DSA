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

// Node *insertBeg(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     if (head == NULL)
//     {
//         temp->next = temp;
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
//     }
//     return temp;
// }

Node *insertBeg(Node *head, int x)
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
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
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
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    insertBeg(head, 50);
    insertBeg(head, 60);
    printList(head);
    return 0;
}
