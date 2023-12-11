#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)

    {
        key = k;
        left = right = NULL;
    }
};

Node *prev = NULL;
Node *convertBTtoDLL(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node *head = convertBTtoDLL(root->left);
    if (::prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = ::prev;
        ::prev->right = root;
    }
    ::prev = root;
    convertBTtoDLL(root->right);
    return head;
}