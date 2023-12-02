#include <iostream>
#include <vector>
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

// Naive Approach

Node *revList(Node *head)
{
    vector<int> arr;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        arr.push_back(curr->data);
    }
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}

// Efficient Solution

// Node *revList(Node *head)
// {
//     Node *curr = head;
//     Node *prev = NULL;
//     while (curr != NULL)
//     {
//         Node *next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << (temp->data) << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(25);
    head->next->next->next = new Node(50);
    head->next->next->next->next = new Node(40);
    revList(head);
    printList(head);
    return 0;
}