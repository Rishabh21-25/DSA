#include <iostream>
#include <queue>
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

int getMax(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->key, max(getMax(root->left), getMax(root->right)));
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout << getMax(root);
    return 0;
}