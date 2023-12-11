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

/* ITERATIVE

bool search(Node *root, int x)
{
    while(root!=NULL)
    {
        if(root->key==x)
        {
            return true;
        }
        else if(root->key<x)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return false;
}

*/

bool search(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->key == x)
    {
        return true;
    }
    else if (root->key > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->right->left = new Node(25);
    root->right->right = new Node(40);
    cout << search(root, 30);
    return 0;
}