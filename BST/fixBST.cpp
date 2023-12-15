#include <iostream>
#include <climits>
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

Node *prev = NULL, *first = NULL, *second = NULL;
void fixBST(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    fixBST(root->left);
    if (::prev != NULL && root->key < ::prev->key)
    {
        if (first == NULL)
        {
            first = ::prev;
        }
        second = root;
    }
    ::prev = root;
    fixBST(root->right);
}

int main()
{
    Node *root = new Node(18);
    root->left = new Node(60);
    root->left->left = new Node(4);
    root->right = new Node(70);
    root->right->left = new Node(8);
    root->right->right = new Node(80);
    fixBST(root);
    cout << first->key << " " << second->key;
    return 0;
}