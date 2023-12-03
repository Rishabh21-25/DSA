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

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << (temp->data) << " ";
        temp = temp->next;
    }
}

Node *reverseK(Node *head, int k)
{
    Node *curr = head, *next = NULL, *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        Node *rest_head = reverseK(next, k);
        head->next = rest_head;
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    Node *new_head = reverseK(head, 5);
    printList(new_head);
    return 0;
}
