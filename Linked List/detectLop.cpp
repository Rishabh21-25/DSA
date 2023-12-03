#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
    int data;
    Node *next;
    // bool visited;
    Node(int x)
    {
        data = x;
        next = NULL;
        // visited = false;
    }
};

bool isloop(Node *head)
{
    unordered_set<Node *> s;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        if (s.find(curr) != s.end())
        {
            return true;
        }
        s.insert(curr);
    }
    return false;
}
