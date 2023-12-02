#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// {
//     int count = 0;
//     for (Node *curr = head; curr != NULL; curr = curr->next)
//     {
//         count++;
//     }
//     if (count < n)
//     {
//         return;
//     }
//     Node *curr = head;
//     for (int i = 1; i < (count - n + 1); i++)
//     {
//         curr = curr->next;
//     }
//     cout << (curr->data);
// }

// Efficient Approach

void printNth(Node *head, int n)
{
    if (head == NULL)
    {
        return;
    }
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
        {
            return;
        }
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << (second->data);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(25);
    head->next->next->next = new Node(50);
    head->next->next->next->next = new Node(40);
    printNth(head, 2);
    return 0;
}